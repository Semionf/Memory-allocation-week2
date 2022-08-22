#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4995)

void numbersInArray(int);

int main()
{
	int num;
	printf("Please enter the number of ints you want to enter: ");
	scanf("%d", &num);
	numbersInArray(num);
}

void numbersInArray(int num)
{
	int sum=0;
	int* aArray = calloc(num, sizeof(int));
	if (!aArray)
	{
		exit(1);
	}
	int* ptr = aArray;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", aArray);
		aArray++;
	}
	aArray = ptr;
	for (int i = 0; i < num; i++)
	{
		sum += *aArray;
		aArray++;
	}
	printf("%d", sum);
}