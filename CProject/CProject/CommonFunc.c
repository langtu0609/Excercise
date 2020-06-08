#include <stdio.h>

int InputNumber()
{
	int n = 0;

	printf("Please input the number: ");
	scanf("%d", &n);

	return n;
}

void OutputResult(int result)
{
	printf("Result = %d", result);
}