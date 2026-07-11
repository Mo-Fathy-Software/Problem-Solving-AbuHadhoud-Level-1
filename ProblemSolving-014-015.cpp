
#include <iostream>
using namespace std;

int ReadNumbers(int& num1, int& num2)
{
	cout << "Please Enter the First Number : \n";
	cin >> num1;
	cout << "Please Enter the Last Number : \n";
	cin >> num2;

	return num1, num2;
}

int Swap(int A, int B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
	return A, B;
}

void PrintSwap(int num1, int num2)
{
	cout << "Number 1 : " << num1 << endl;
	cout << "Number 2 : " << num2 << endl;
}

int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintSwap(num1, num2 );
	cout << "\n-----------------------\n";
	cout << "After Swap -> .\n\n";
	swap(num1, num2);
	PrintSwap(num1, num2);


}
