#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please Enter the Age : " << endl;
    cin >> Age;
    return Age;

}
bool CalculateInRange(int Number, int From, int To)
{
    int RangeOfNumber;
    RangeOfNumber = (From <= Number && Number <= To);
    return RangeOfNumber;
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age=0;
    do
    {
        Age = ReadAge();

    } while (!CalculateInRange(Age, From, To));
    return Age;
}

void PrintCalculateAge(int Age)
{
    cout << "Your Age is : " << Age << "\n";

}






int main()
{

    PrintCalculateAge(ReadUntilAgeBetween(18,45));
    return 0;
}
