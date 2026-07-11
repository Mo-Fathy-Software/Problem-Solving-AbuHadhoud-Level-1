#include <iostream>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please enter the Pin Code ?" << endl;
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	string PinCode;
	for (int counter = 1 ;counter <=3;counter++)
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;

		}
		else
		{
			system("Color 4F");
			cout << "\nWrong PIN, You have " <<  3 - counter << "Tries .\n";
		}
			
	}
	return 0;

}


int main()
{
	if (Login())
	{
		cout << "Your Balance is = 7500 ." << endl;
		system("Color 2F");
	}
	else
	{
		cout << "Your Account is Blocked Call the Bank to Help .\n";
	}
	return 0;
}

