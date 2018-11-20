#include "POWMiner.hpp"
using namespace std;

string POWMiner::Mine(Hasher& hasher, string input, int32_t& nonce, int32_t difficulty)
{
	string prefix(difficulty, '0');
    string hash = "";
	do
	{
		nonce++;
		string noncestr = std::to_string(nonce);
		hash = hasher.ComputeHash(input + noncestr);
		cout << prefix << " " << hash.substr(0, difficulty) << endl;
	}
	while (hash.substr(0, difficulty) != prefix);
	return hash;
}
