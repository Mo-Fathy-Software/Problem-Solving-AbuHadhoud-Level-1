#include <iostream>
using namespace std;

enum enMonth { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

int GetNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number >To);
	return Number;
}
enMonth ReadMonth()
{
	return (enMonth)GetNumberInRange("Please enter the Month[1:12] ?", 1, 12);
}
string GetMonth(enMonth Day)
{
	switch (Day)
	{
	case enMonth::January:
		return "January";
	case enMonth::February:
		return "February";
	case enMonth::March:
		return "March";
	case enMonth::April:
		return "April";
	case enMonth::May:
		return "May";
	case enMonth::June:
		return "June";
	case enMonth::July:
		return "July";
	case enMonth::August:
		return "August";
	case enMonth::September:
		return "September";
	case enMonth::October:
		return "October";
	case enMonth::November:
		return "November";
	case enMonth::December:
		return "December";
	default:
		return "This is NOt Valid";

	}
}



int main()
{
	cout << GetMonth(ReadMonth()) << endl;
	return 0;

}
