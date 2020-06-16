#include <stdio.h>

int CalculateSum(int n)
{
	// Method 1
	/*int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum + i;
	}*/

	// Method 2
	int sum = n * (1 + n) / 2;

	return sum;
}