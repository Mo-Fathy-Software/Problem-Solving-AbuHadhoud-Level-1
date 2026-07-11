#include <iostream>
using namespace std;

float ReadData() {
    float D;
    cout << "Please Enter the Diameter:  " << endl;
    cin >> D;
    return D;
}
float CalculateTriangleArea(float D)
{
    const float PI = 3.14159;
    return  (PI * pow(D, 2)) / 4;

}
void PrintResults(float area)
{
    cout << " Area : " << area << endl;
}


int main()
{
    PrintResults(CalculateTriangleArea(ReadData()));
}