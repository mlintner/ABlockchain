#include "Miner.hpp"

string Miner::Mine(Hasher &hasher, string input, int32_t &nonce, int32_t difficulty) {
    return hasher.ComputeHash(input);
}
