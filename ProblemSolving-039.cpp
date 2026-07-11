#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) 
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;

}
float RemainderPay(float TotalBill,float CashPaid)
{
    return CashPaid - TotalBill;
}

void PrintRemainder(float TotalBill, float CashPaid)
{
    cout << "The Remainder is = " << RemainderPay(TotalBill, CashPaid);
}




int main()
{
    float TotalBill = ReadPositiveNumber("Please enter the TotalBill ?");
    float CashPaid = ReadPositiveNumber("Please enter the CashPaid ?");

    PrintRemainder(TotalBill, CashPaid);

}
