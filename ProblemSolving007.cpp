
#include <iostream>
using namespace std;

float ReadNumber()
{
    float number;
    cout << "Please Enter the Number to Half : \n";
    cin >> number;
    return number;
}

float HalfTheNumber(float number)
{
    return (float)number / 2;
}

void PrintHalfNumber(float number)
{
    cout << "The Half Of Number is : " << number << "\n";
}


int main()
{
    PrintHalfNumber(HalfTheNumber(ReadNumber()));
}
