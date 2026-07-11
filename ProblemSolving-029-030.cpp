//Sum Odd Number from 1 to N.
#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };
int ReadNumber()
{
    int Number;
    cout << "Please Enter the Number : " << endl;
    cin >> Number;
    cout << "-----------------\n";
    return Number;

}
enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

void PrintSumOddNumbers(int N)
{
    int SumOdd = 0;
    for (int element = 1; element <= N;element++)
    {
        if (CheckOddOrEven(element) == enOddOrEven::Odd)
        {
            SumOdd += element;
        }
    }
    cout << SumOdd << endl;

}
int main()
{
    int N = ReadNumber();
    PrintSumOddNumbers(N);
}
