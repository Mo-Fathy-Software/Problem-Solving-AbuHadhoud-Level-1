#include <iostream>
using namespace std;

float ReadData(float& A,float& B) {
    
    cout << "Please Enter triangle Side A:  " << endl;
    cin >> A ;
    cout << "Please Enter triangle side B: " << endl;
    cin >> B;
    return A,B;
}
float CirleAreaByITriangle(float A , float B)
{
    const float PI = 3.14159;
    return  PI * (pow(B,2)/4) * ((2*A-B)/(2*A+B));

}
void PrintResults(float area)
{
    cout << " Area : " << area << endl;
}


int main()
{
    float A;
    float B;
    ReadData(A, B);
    PrintResults(CirleAreaByITriangle(A, B));

}