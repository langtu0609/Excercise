#include <iostream>
using namespace std;

int InputNumber()
{
	int number;
	cout << "Please input number: ";
	cin >> number;

	return number;
}

void OutputResult(int result)
{
	cout << "Result = " << result;
}