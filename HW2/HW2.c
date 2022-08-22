
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4995)

void printNumbers();

int main1()
{
	printNumbers();
}

void printNumbers() {
	int* numbers = (int*)calloc(4, sizeof(int));
	int* ptr = numbers;
	if (numbers == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	for (int i = 0; i < 4; ++i) {
		*numbers = i + 1;
		numbers++;
	}
	numbers = ptr;
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *ptr);
		ptr++;
	}
	free(numbers);
}

