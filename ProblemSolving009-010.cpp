#include <iostream>
using namespace std;
void ReadMarks(int &num1,int &num2,int &num3)
{
   

    cout << "Please enter the First Mark : \n";
    cin >> num1;
    cout << "Please enter the Second Mark : \n";
    cin >> num2;
    cout << "Please Enter the Third Mark : \n";
    cin >> num3;
    
    
}
int Sum3Marks(int num1,int num2,int num3)
{
    int total;
    total = num1 + num2 + num3;
    return total;
}
float AvarageMark(int num1,int num2,int num3)
{
    return  (float)Sum3Marks(num1, num2, num3) / 3;

}
void Print3Marks(int total , float avatage)
{
    cout << "\n Total Marks : " << total << endl;
    cout << "\n ---------------- \n";
    cout << "\n Avarage Marks : " << avatage << endl;
}
int main()
{
    int num1, num2, num3;
    ReadMarks(num1, num2, num3);
    Print3Marks(Sum3Marks(num1, num2, num3),AvarageMark(num1,num2,num3));
}

