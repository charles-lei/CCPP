#include "Sort.h"
#include "..\Common.h"

//√∞≈›≈≈–Ú
void BubbleSort(int *a, uint length)
{
	for (uint i = 0; i<length - 1; i++)
	{
		for (uint j = length - 1; j>i; j--)
		{
			if (a[j] < a[j - 1])
			{
				Swap(&a[j], &a[j - 1]);
			}
		}
	}
}

//≤Â»Î≈≈–Ú
void InsertSort(int *a, uint length)
{
	for (uint i = 1; i < length; i++)
	{
		int temp = a[i];
		for (uint j = i - 1; j >= 0; j--)
		{
			if (temp < a[j])
			{
				a[j + 1] = a[j];
				a[j] = temp;
				continue;
			}
			break;
		}
	}
}

//—°‘Ò≈≈–Ú
void SelectSort(int *a, uint length)
{
	for (uint i = 0; i < length - 1; i++)
	{
		int minIndex = i;
		for (uint j = i + 1; j < length; j++)
		{
			if (a[j] < a[minIndex])
				minIndex = j;
		}
		Swap(&a[i], &a[minIndex]);
	}
}


int Partation(int *a, uint length)
{
	if (length <= 1) return 0;
	int keyIndex = 0;
	uint i = 1;
	uint j = length - 1;
	while (i <= j)
	{
		while (i <= j)
		{
			if (a[keyIndex] > a[j])
			{
				Swap(&a[keyIndex], &a[j]);
				keyIndex = j;
				j--;
				break;
			}
			j--;
		}
		while (i <= j)
		{
			if (a[keyIndex] < a[i])
			{
				Swap(&a[keyIndex], &a[i]);
				keyIndex = i;
				i++;
				break;
			}
			i++;
		}
	}
	return keyIndex;
}

//øÏÀŸ≈≈–Ú
void QuickSort(int *a, uint length)
{
	if (length <= 1) return;

	int keyIndex = Partation(a, length);
	QuickSort(a, keyIndex);
	QuickSort(&a[keyIndex + 1], length - keyIndex - 1);
}