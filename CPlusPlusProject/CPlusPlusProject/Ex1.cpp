#include "MyException.cpp"

int CalculateSum(int number)
{
	if (number < 0)
	{
		throw MyException();
	}
	// Method 1
	/*int sum = 0;
	
	for (int i = 1; i <= number; ++i)
	{
		sum = sum + i;
	}*/

	// Method 2
	int sum = number * (1 + number) / 2;

	return sum;
}