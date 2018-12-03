//
// Created by Admin on 11/19/2018.
//

#include "../blocklib/SHA256Hasher.hpp"
#include "../blocklib/POWMiner.hpp"
#include "../blocklib/BlockChain.hpp"
using namespace std;

int main()
{
    int32_t difficulty = 3;
    BlockChain<SHA256Hasher, POWMiner> chain = BlockChain<SHA256Hasher, POWMiner>(3);

    cout << "Add new block" << endl;
    chain.AppendBlock("Bob gave Alice 1E");

    cout << "Add new block" << endl;
    chain.AppendBlock("Alice gave Bob a cat");

    cout << "Add new block" << endl;
    chain.AppendBlock("John gave Mary a Parrot");

    cout << "Add new block" << endl;
    chain.AppendBlock("John gave Jill 5B");

    chain.PrintChain();

    //cout << "Press any key to exit" << endl;
    //cin.get();

    return 0;
}