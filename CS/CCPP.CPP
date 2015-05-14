
#include "Common.h"
#include "Sort\Sort.h"
#include <stdio.h>

int main()
{
	int a[] = { 1, 23, 1, 2, 4, 2, 5, 3, 6, 7, 3, 8, 5, 8, 9, 0, 6, 4, 4, 5, 7, 4, 3, 45, 6, 7, 5, 3, 2, 45, 6, 78, 6, 45, 3, 5, 6, 87, 187, 6, 5, 3, 22, 1, 3, 4, 5, 56, 89, 0 };
	uint length = sizeof(a) / sizeof(a[0]);
	//	BubbleSort(a,length);
	//	InsertSort(a,length);
	//	SelectSort(a,length);
	QuickSort(a, length);
	for (uint i = 0; i < length; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}