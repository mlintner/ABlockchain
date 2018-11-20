#pragma once
#include "Hasher.hpp"

class Miner
{
public:
	virtual string Mine(Hasher& hasher, string input, int32_t& nonce, int32_t difficulty);
};
