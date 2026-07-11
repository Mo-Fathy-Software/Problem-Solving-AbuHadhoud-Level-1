#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

enum enPrimeNotPrime {
	Prime = 1,
	NotPrime = 2
};

enPrimeNotPrime CheckNumber(int Number) 
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M;counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;

}

void PrintNumberType(int Number)
{
	if (CheckNumber(Number) == Prime)
	{
		cout << "This Number is Prime ." << endl;
	}
	else
	{
		cout << "This Number is Not Prime ." << endl;
	}
}

int main()
{
	PrintNumberType(ReadPositiveNumber("Please enter a Positive Number?"));
}
