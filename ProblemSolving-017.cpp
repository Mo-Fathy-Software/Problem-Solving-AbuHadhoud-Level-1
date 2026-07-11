#include <iostream>
using namespace std;

float ReadData(float& a, float& h) {
    cout << "Please Enter the data 1:  " << endl;
    cin >> a;
    cout << "Please Enter the data 2 : " << endl;
    cin >> h;
    return a, h;
}
float CalculateTriangleArea(float a, float h)
{

    return  (a/2)*h;

}
void PrintResults(float area)
{
    cout << "Rectangle Area : " << area << endl;
}


int main()
{
    float a, h;
    ReadData(a, h);
    PrintResults(CalculateTriangleArea(a, h));
}

