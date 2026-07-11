#include <iostream>
using namespace std;

float ReadNumberOfHours()
{
	float NumberOfHours;
	cout << "Please enter Number Of Hours to calculate?\n";
	cin >> NumberOfHours;
	return NumberOfHours;
}
void CalculateWeeks(float NumberOfHours)
{
	float Weeks = NumberOfHours / 168;
	float Days = NumberOfHours / 24;

	cout << Weeks << " Weeks" << endl;
	cout << Days << " Days" << endl;

}


int main()
{
	CalculateWeeks(ReadNumberOfHours());
}
