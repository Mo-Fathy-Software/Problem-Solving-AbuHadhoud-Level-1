//Sevice Fee Service Tax.
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateServiceFeeTax(float Number)
{
	Number *= 1.1;
	Number *= 1.16;
	return Number;
}

int main()
{
	float Number = ReadPositiveNumber("Please enter the Number?");
	cout << "The BillValue is " << Number << endl;
	cout << "*******************************\n";
	cout << "The TotalBill is " << CalculateServiceFeeTax(Number) << endl;
}

