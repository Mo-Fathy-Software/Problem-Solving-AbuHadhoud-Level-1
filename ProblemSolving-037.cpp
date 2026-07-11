//Break Point -99 and add calc before Numbers.
#include <iostream>
using namespace std;

float ReadNumbers(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;
	return number;
	
}
float SumNumbers()
{
	float sum = 0, number = 0, counter = 1;
	do
	{
		number = ReadNumbers("Please enter the number : ");
		if (number == -99)
		{
			break;
		}
		sum += number;
		counter++;
	} while (number != -99);

	
	cout << "\n" << "Results Sum is : ";
	return sum;
}

int main()
{
	cout  << SumNumbers() << "\n";
}
