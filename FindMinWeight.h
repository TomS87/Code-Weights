#include<stdlib.h>

struct weightedCode
{
	unsigned long code;
	unsigned weight;
};

int weight(unsigned long code);
weightedCode distance(unsigned long codes[], unsigned len);
unsigned long power(unsigned a, unsigned n);