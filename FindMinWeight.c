#include<stdlib.h>
#include"FindMinWeight.h"



/// distance(codes[],len)
/// computes the minimum weight in the linear span (excluding 0) of a collection of codes
/// returns a struct containing the minimal point in the span and its weight
///
/// \param[in]  codes[]   an array of codes, represented as longs
/// \param[in]  len       length of above array

weightedCode distance(unsigned long codes[], unsigned len)
{

	// i loops over integers from 0 to 2^len
	// The binary digits of i represent the
	// indices in L which are to be added
	// together to form an element in the
	// linear span.

	unsigned long current, size = power(2, len);
	unsigned minimum, wt;
	weightedCode minimizer;
	for (unsigned long i = 1; i < size; i++)
	{
		current = 0;	

		for (unsigned j = 0; j < len; j++)
		{
			if ((i >> j) & 1)
			{
				current ^= L[j];
			}
		}

		wt = weight(current);

		if ((current != 0 && wt < minimum) || i == 1)
		{
			minimum = wt;
			weightedCode.weight = minimum;
			weightedCode.code = current;
		}
	}

	return weightedCode;
}

// Computes the number of 1 bits in the
// unsigned integer a

int weight(unsigned long a)
{
	int i = 0;

	while (a != 0)
	{
		i += (a & 1);
		a >>= 1;
	}
	return i;
}

unsigned long power(unsigned a, unsigned n)
{
	int i = 1;
	unsigned long base = a;
	unsigned long total = 1;
	for (i = 1; i <= n; i++)
	{
		total *= base;
	}
	return total;
}
