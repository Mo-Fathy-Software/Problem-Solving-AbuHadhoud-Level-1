#include <iostream>
using namespace std;

float ReadData() {
    float A;
    cout << "Please Enter Square Side A:  " << endl;
    cin >> A;
    return A;
}
float CirleAreaInscribedInSquare(float A)
{
    const float PI = 3.14159;
    return  (PI * pow(A, 2)) / 4;

}
void PrintResults(float area)
{
    cout << " Area : " << area << endl;
}


int main()
{
    PrintResults(CirleAreaInscribedInSquare(ReadData()));
}