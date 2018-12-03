#pragma once

#include "Miner.hpp"
#include "Hasher.hpp"
#include <iostream>
#include "Block.hpp"

class POWMiner : public Miner {
public:
    string Mine(Hasher &hasher, string input, int32_t &nonce, int32_t difficulty) override;
};
