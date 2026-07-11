#include <iostream>
using namespace std;

struct StrTaskDuration
{
	int NumberOfDays,
		NumberOfHours,
		NumberOfMinutes,
		NumberOfSeconds;
};
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

StrTaskDuration SecondToTaskDuration(int TotalSeconds)
{
	StrTaskDuration TaskDuration;	
	const int SecondPerDay = 60 * 60 * 24;
	const int SecondPerHour = 60 * 60;
	const int SecondPerMinutes = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondPerDay);
	Remainder = TotalSeconds % SecondPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondPerHour);
	Remainder = Remainder % SecondPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondPerMinutes);
	Remainder = Remainder % SecondPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;

}
void PrintTaskDurationDetials(StrTaskDuration TaskDuration)
{
	cout << "\n" <<
		TaskDuration.NumberOfDays << ":" <<
		TaskDuration.NumberOfHours << ":" <<
		TaskDuration.NumberOfMinutes << ":" <<
		TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please enter the Total Seconds ?");
	PrintTaskDurationDetials(SecondToTaskDuration(TotalSeconds));
	return 0;
}





