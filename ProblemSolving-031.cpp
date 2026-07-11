#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter your number to calculate power(2,3,4)" << endl;
	cin >> Number;
	return Number;
}

void PrintPowers(int Number)
{
	int power2 = Number * Number;
	int power3 = Number * Number * Number;
	int power4 = Number * Number * Number * Number;
	cout << power2 << endl << power3 << endl << power4 << endl;

}
int main() 
{
	PrintPowers(ReadNumber());

}