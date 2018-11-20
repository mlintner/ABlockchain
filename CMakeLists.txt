cmake_minimum_required(VERSION 3.9)
project(SimpleBlockchain)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimpleBlockchain
        Block.cpp
        Block.hpp
        BlockChain.hpp
        Hasher.cpp
        Hasher.hpp
        Miner.cpp
        Miner.hpp
        POWMiner.cpp
        POWMiner.hpp
        sha256.h
        SHA256Hasher.cpp
        SHA256Hasher.hpp
        SimpleBlockchain.cpp SimpleBlockChain.cpp)
