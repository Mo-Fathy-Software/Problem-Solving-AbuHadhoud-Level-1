#include<iostream>
using namespace std;
int ReadGradeInRange(int From , int To)
{
	int Grade;
	do
	{
		cout << "Please Enter the Grade : \n";
		cin >> Grade;
	} while (Grade < From || Grade > To);
	
	return Grade;
}
int CalculateGrade(int Grade)
{
	if (Grade > 89 and Grade < 101)
		cout << "\nA\n";
	else if (Grade > 79 and Grade < 90)
		cout << "\nB\n";
	else if (Grade > 69 and Grade < 80)
		cout << "\nC\n";
	else if (Grade > 59 and Grade < 70)
		cout << "\nD\n";
	else if (Grade > 49 and Grade < 60)
		cout << "\nE\n";
	else
		cout << "\nF\n";
	return Grade;
	
}
int main()
{
	CalculateGrade(ReadGradeInRange(0,100));

}