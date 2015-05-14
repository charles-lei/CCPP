#ifndef _COMMON_H_
#define _COMMON_H_
#define NULL 0
typedef unsigned int uint;
enum ErrorCode
{
	OutOfRange,
	OutOfMemory
};
void Swap(int *a, int *b);
#endif