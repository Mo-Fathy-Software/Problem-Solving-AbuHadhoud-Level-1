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
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;

		}
		else
		{
			cout << "Wrong PinCode?" << endl;
			system("Color 4F");
		}
	} while (PinCode != "1234");
}

int main()
{
	if (Login())
	{
		cout << "Your Balance is = 7500 ." << endl;
		system("Color 2F");
	}
	return 0;
}

