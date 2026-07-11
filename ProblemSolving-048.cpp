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
void CalculateMonthlyPayment(float LoanAmount, float ManyOfMonth)
{
	cout << "----------------------\n" <<
		LoanAmount / ManyOfMonth << " MonthlyPayment.\n";
}


int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the LoanAmount : ");
	float ManyOfManth = ReadPositiveNumber("Please enter the Many Of Month : ");
	CalculateMonthlyPayment(LoanAmount, ManyOfManth);
	return 0;
}
