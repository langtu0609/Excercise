int CalculateSum(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; ++i)
	{
		sum = sum + i;
	}

	return sum;
}