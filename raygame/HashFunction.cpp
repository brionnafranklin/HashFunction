#include "HashFunction.h"

//define pi
# define M_PI           3.14159265358979323846  /* pi */

namespace HashFunction
{
	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		//add the data at the index of i to hash
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
			//multiplyn hash by 1313 and add data at the index of i
			hash = (hash * 1313) + data[i];
		}

		//output as a color with alpha value
		return (hash & 0x7FFFFFFF);
	}

	//custom hash
	unsigned int colorHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			//multiplyn hash by 1313 and add data at the index of i
			hash = (hash * 1313) + data[i];
		}

		//return hash as a color
		return (hash & 0xFFFFFF);
	}

	//Fun custom hash
	unsigned int briColorHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			//multiply 998877 by hash divided 2189. then subtract the data at the index of i by pi
			hash = (998877 * (hash / 2189) - data[i]) / M_PI;
			//if hash is more than 999999 
			if (hash > 999999)
			{
				//subtract the length multiplied by hash from hash. than add 420 divide by 69
				hash = hash - (length * hash) + 420 / 69;
			}
			//if the data at the index of i plus 5 is 10 or more
			if (data[i] + 5 >= 10)
			{
				//hash is hash divided by 2 plus 69
				hash = (hash / 2) + 69;
			}
		}

		//return as color
		return (hash & 0xFFFFFF);
	}
}
