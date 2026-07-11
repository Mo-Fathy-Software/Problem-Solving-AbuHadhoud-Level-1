//Total Pennies.
#include <iostream>
using namespace std;

struct stBigyBankContent
{
	int Penny, Nickel, Dime, Quarter, Dollar;
};


stBigyBankContent ReadCoins()
{
	stBigyBankContent BigyBankContent;
	cout << "Please Enter the Pennies : " << endl;
	cin >> BigyBankContent.Penny;
	cout << "Please Enter the Nickels : " << endl;
	cin >> BigyBankContent.Nickel;
	cout << "Please Enter the Dime : " << endl;
	cin >> BigyBankContent.Dime;
	cout << "Please Enter the Quarter : " << endl;
	cin >> BigyBankContent.Quarter;
	cout << "Please Enter the Dollar : " << endl;
	cin >> BigyBankContent.Dollar;
	return BigyBankContent;
}
int CalculateCoinsToPannies(stBigyBankContent BigyBankContent)
{
	int AllToPennies = BigyBankContent.Penny + BigyBankContent.Nickel * 5 + BigyBankContent.Dime * 10
		+ BigyBankContent.Quarter * 25 + BigyBankContent.Dollar * 100;
	return AllToPennies;
}

int main()
{
	int TotalPannies = CalculateCoinsToPannies(ReadCoins());
	cout << TotalPannies << " Pennies . \n" ;
	cout << (float)TotalPannies / 100 << " Dollar . \n";

	return 0;
}
//End Program.