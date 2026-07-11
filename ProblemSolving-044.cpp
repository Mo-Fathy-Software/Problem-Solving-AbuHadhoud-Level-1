#include <iostream>
using namespace std;

enum enDayweek { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saterday = 7 };
int PositiveNumber(string Message,int From,int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number >To);
	return Number;
}
enDayweek ReadDayOfWeek()
{
	return (enDayweek)PositiveNumber("Please enter the Number of Day ", 1, 7);
}
string GetDayOfWeek(enDayweek Day)
{
	switch (Day)
	{
	case enDayweek::Sunday:
		return "SunDay";
	case enDayweek::Monday:
		return "Monday";
	case enDayweek::Tuesday:
		return "Tuesday";
	case enDayweek::Wednesday:
		return "Wednesday";
	case enDayweek::Thursday:
		return "Thursday";
	case enDayweek::Friday:
		return "Friday";
	case enDayweek::Saterday:
		return "SuterDay";
	default:
		return "This is NOt Valid";

	}
}



int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
	
}
