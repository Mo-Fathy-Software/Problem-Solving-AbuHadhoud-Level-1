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
float CalculateToSeconds(float Days,float Hours,float Minutes,float Seconds)
{
    return (Days * 24 * 60 * 60) + (Hours * 60 * 60)
        + (Minutes * 60) + (Seconds);


}


int main()
{
    float ReadDays = ReadPositiveNumber("Please enter the Days?\n");
    float ReadHours = ReadPositiveNumber("please enter the Hours?\n");
    float ReadMinutes = ReadPositiveNumber("Please enter the Minutes?\n");
    float ReadSeconds = ReadPositiveNumber("Please enter the Seconds?\n");

    cout << CalculateToSeconds(ReadDays, ReadHours, ReadMinutes, ReadSeconds) <<
        " Seconds." << endl;

}
