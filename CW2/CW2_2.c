#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4995)

int* alloc5Numbers(int[]);
int printNum(int*);
int main2()
{
	int numbers[5], sum;
	int* aMemory;
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i + 1;
	}
	aMemory = alloc5Numbers(numbers);
	sum = printNum(aMemory);
	printf("\n%d", sum);
	free(aMemory);
}


int* alloc5Numbers(int numbers[])
{
	int* arr = calloc(5,sizeof(int));
	if (!arr)
	{
		exit(1);
	}
	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*arr = numbers[i];
		arr++;
	}
	return ptr;
}

int printNum(int* numberList) {
	int sum = 0;
	int* ptr = numberList;
	for (int i = 0; i < 5; i++)
	{
		sum += *ptr;
		printf("%d ", *ptr);
		ptr++;
	}
	return sum;
}