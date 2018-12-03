#pragma once

#include <string>
#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    Block(const string data,
          const string hash,
          const time_t time,
          const uint32_t index,
          const int64_t nonce,
          const string prevHash) : _data(data), _hash(hash), _time(time), _index(index), _nonce(nonce) {
        this->prevHash = prevHash;
    }


    Block(const string data) : _data("GENESIS"), _time(time(nullptr)), _hash("sfsdfdsfsdfsfsfsfsfsfsfsfsdfsfs"),
                               _index(0), _nonce(-1) {
    }

    ~Block() {}

    // at the moment assume it is valid as
    // shown in printing the chainh
    bool Validate(Block) {
        return true;
    }

    string Hash() { return _hash; }

    friend ostream &operator<<(ostream &out, const Block &c);

public:

    const string _data;
    const string _hash;
    const time_t _time;
    const uint32_t _index;
    const int64_t _nonce;
    string prevHash;
};
