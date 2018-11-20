#pragma once

#include <string>
#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    Block(string data,
          string hash,
          time_t time,
          uint32_t index,
          int64_t nonce,
          string prevHash) {
        _data = data;
        _hash = hash;
        _time = time;
        _index = index;
        _nonce = nonce;
        this->prevHash = prevHash;
    }


    Block(int32_t index, string data) {
        _index = index;
        _data = data;
    };

    // at the moment assume it is valid as
    // shown in printing the chainh
    bool Validate(Block) {
        return true;
    }

    string Hash() { return _hash; }

    friend ostream &operator<<(ostream &out, const Block &c);

public:

    string _data;
    string _hash;
    time_t _time;
    uint32_t _index;
    int64_t _nonce;
    string prevHash;
};
