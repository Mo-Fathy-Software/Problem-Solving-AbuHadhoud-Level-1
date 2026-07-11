#include <iostream>
using namespace std;

int ReadAge()
{
	short Number;
	cout << "Please Enter the Age : " << endl;
	cin >> Number;
	return Number;
}

bool ValidateNumberInRange(int Number , int From ,int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a Valid age .\n ";
	else
		cout << Age << " is a invalid age .\n";
}


int main()
{
	PrintResult(ReadAge());
}