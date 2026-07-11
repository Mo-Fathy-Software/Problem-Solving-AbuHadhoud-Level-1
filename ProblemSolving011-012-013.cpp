#include <iostream>
using namespace std;

// function read 

void ReadNumber(int& Number1, int& Number2 , int& Number3) {
    cout << "Please Enter first Numbers : " << endl;
    cin >> Number1;
    cout << "Please Enter Last Numbers : " << endl;
    cin >> Number2;
    cout << "Please Enter THird Numbers : " << endl;
    cin >> Number3;
}

// function calc
int MaxNumber(int Number1  ,  int Number2 , int Number3)
{
    
    if (Number1 > Number2 &&Number1 > Number3)
    {
        return Number1;
    }
    else if (Number2 > Number1 && Number2 > Number3)
    {
        return Number2;
    }
    else
    {
        return Number3;
    }
}
// function print
void PrintNumber(int max)
{
    cout << "The Maximume Number equal : " << max << endl;
}


int main()
{
    int Number1, Number2, Number3;
    ReadNumber(Number1, Number2 ,Number3);
    PrintNumber(MaxNumber(Number1,Number2,Number3));
}

