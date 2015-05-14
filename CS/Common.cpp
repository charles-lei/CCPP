#include "Common.h"
void Swap(int *a, int *b)
{
	if (a == b) return;
	int temp = *a;
	*a = *b;
	*b = temp;
}