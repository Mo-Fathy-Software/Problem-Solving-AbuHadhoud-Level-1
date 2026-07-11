#include <iostream>
using namespace std;

float ReadData() {
    float r;
    cout << "Please Enter the radious:  " << endl;
    cin >> r;
    return r;
}
float CalculateTriangleArea(float r)
{
    const float PI = 3.14159;
    return  pow(r,2)*PI;

}
void PrintResults(float area)
{
    cout << "Circle Area : " << area << endl;
}


int main()
{
    PrintResults(CalculateTriangleArea(ReadData()));
}