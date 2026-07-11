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
void CalculateHowManyMonthNeed(float LoanAmount, float MonthlyPayment)
{
	cout <<"----------------------\n"<<
		LoanAmount / MonthlyPayment << " Months\n";
}


int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the LoanAmount : ");
	float MonthlyPayment = ReadPositiveNumber("Please enter the Monthly Payment : ");
	CalculateHowManyMonthNeed(LoanAmount, MonthlyPayment);
	return 0;
}
