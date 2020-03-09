#pragma once
#include <functional>
namespace HashFunction
{
	typedef std::function< unsigned int(const char*, unsigned int)> HashFunc;

	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);

	//hash function by brian kernighan and dennis ritchie
	unsigned int BKDRHash(const char* data, unsigned int length);

	//custom hash
	unsigned int colorHash(const char * data, unsigned int length);

	//Fun custom hash
	unsigned int briColorHash(const char * data, unsigned int length);

	// ADD YOUR FUNCTIONS HERE

	// a helper to access a default hash function
	static HashFunc defaultHash = badHash;
};