//Print Number from N to 1.
#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter the Number : " << endl;
    cin >> Number;
    cout << "-----------------\n";
    return Number;

}

void PrintResults(int N)
{
    for (int i = N;i >= 1; i--)
    {
        cout << i << endl;

    }

}
int main()
{
    int N = ReadNumber();
    PrintResults(N);
}
