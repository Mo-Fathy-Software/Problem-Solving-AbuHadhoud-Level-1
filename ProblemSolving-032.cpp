#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please Enter the Number : \n";
	cin >> Number;
	return Number;
}
int ReadPower()
{
	int Power;
	cout << "Please Enter the Power : \n";
	cin >> Power;
	return Power;

}

int PrintCalculate(int Number,int Power)
{
	if (Power == 0)
	{
		return 1;
	}
	int P = 1;
	for (int i = 1;i <= Power;i++)
	{
		P = P * Number;
	}
	return P;
}


int main()
{
	
	cout << PrintCalculate(ReadNumber(),ReadPower());
}