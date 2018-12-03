#pragma once

#include "Hasher.hpp"
#include <string>

using namespace std;


class SHA256Hasher : public Hasher {
public:
    string ComputeHash(string) override;
};
