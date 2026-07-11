#include <iostream>
using namespace std;

float ReadData(float& a,float& d) {
    cout << "Please Enter the a for side :  " <<  endl;
    cin >> a;
    cout << "Please Enter the d for diagonal : " <<  endl;
    cin >> d;
    return a, d;
}
float CalculateRectangleAreaBySideAndDiagonal(float a, float d)
{
    
    return  a * sqrt(pow(d, 2) - pow(a, 2));

}
void PrintResults(float area)
{
    cout << "Rectangle Area : " << area << endl;
}


int main()
{
    float a, d;
    ReadData(a, d);
    PrintResults(CalculateRectangleAreaBySideAndDiagonal(a, d));
}

