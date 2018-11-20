#include "SHA256Hasher.hpp"
#include "SHA256.h"


string SHA256Hasher::ComputeHash(string input)
{
	string hexString;
	picosha2::hash256_hex_string(input, hexString);
	return hexString;
}
