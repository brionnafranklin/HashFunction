#include "HashFunction.h"

# define M_PI           3.14159265358979323846  /* pi */

namespace HashFunction
{
	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; ++i)
			hash += data[i];
		return hash;
	}

	//hash function by brian kernighan and dennis ritchie
	unsigned int BKDRHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	//custom hash
	unsigned int colorHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xFFFFFF);
	}

	//Fun custom hash
	unsigned int briColorHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (998877 * (hash / 2189) - data[i]) / M_PI;
		}

		return (hash & 0xFFFFFF);
	}
}