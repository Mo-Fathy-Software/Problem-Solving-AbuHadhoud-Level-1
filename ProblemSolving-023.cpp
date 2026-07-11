#include <iostream>
using namespace std;

float ReadData(float& A, float& B,float& C) {

    cout << "Please Enter triangle Side A:  " << endl;
    cin >> A;
    cout << "Please Enter triangle side B: " << endl;
    cin >> B;
    cout << "Please Enter triangle side c: " << endl;
    cin >> C;
    return A, B, C;
}
float CirleAreaByArbitraryTriangle(float A, float B,float C)
{
    float P = (A + B + C) / 2;
    const float PI = 3.141592653589793238;
    return PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);

}
void PrintResults(float area)
{
    cout << " Area : " << area << endl;
}


int main()
{
    float A, B, C;
    ReadData(A, B,C);
    PrintResults(CirleAreaByArbitraryTriangle(A, B,C));

}