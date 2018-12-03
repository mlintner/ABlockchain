#pragma once

#include "Block.hpp"
#include <vector>
#include <ctime>
#include "POWMiner.hpp"
#include "SHA256Hasher.hpp"
#include <algorithm>

using namespace std;

template<class H, class M>
class BlockChain {
public:
    M miner;
    H hasher;

    BlockChain() {
    }

    BlockChain(int32_t difficulty);

    virtual ~BlockChain() {
    }

    void AppendBlock(string data);

    void PrintChain();

private:
    uint32_t _difficulty;
    vector<Block> _chain;
    uint32_t _index = 1;

    Block PreviousBlock() const;

    bool IsValidBlock(Block newBlock, Block previousBlock);

    bool Validate();
};

template<class H, class M>
BlockChain<H, M>::BlockChain(int32_t difficulty) {
    _chain.emplace_back(Block("GENESIS"));
    _difficulty = difficulty;
    _index = 0;
}


template<class H, class M>
void BlockChain<H, M>::AppendBlock(string data) {
    const int32_t index = ++_index;
    const time_t time = std::time(nullptr);
    const string prevHash = PreviousBlock().Hash();
    int32_t nonce = 0;
    std::stringstream info;
    info << index << time << data << prevHash;

    string input = info.str();

    string hash = miner.Mine(hasher, input, nonce, _difficulty);
    _chain.push_back(Block(data, hash, time, index, nonce, prevHash));
}

template<class H, class M>
Block BlockChain<H, M>::PreviousBlock() const {
    return _chain.back();
}


template<class H, class M>
bool BlockChain<H, M>::IsValidBlock(Block newBlock, Block previousBlock) {
    return previousBlock.Validate(newBlock);
}

template<class H, class M>
void BlockChain<H, M>::PrintChain() {
    for_each(
            _chain.begin(), _chain.end(),
            [&](auto &&block) { cout << block << '\n'; });
}
