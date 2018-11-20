#pragma once
#include <string>
using namespace std;

class Hasher
{
public:
	virtual string ComputeHash(string);

	virtual ~Hasher()
	{
	}
};
