
#include <iostream>
//#include <string>
using namespace std;
//=============================================================================================================
//=============================================================================================================
// problem from 1 to 5 ...
//-----------------------
// Problem 1,2
//-----------------------
//string ReadName()
//{
//    string Name;
//    cout << "Enter Your Name : \n";
//    getline(cin, Name);
//
//    return Name;
//}
//
//void PrintName(string Name) 
//{
//    cout << "Your Name Is : " << Name << endl;
//}
//-------------------------------------------------
// Problem 3
//-------------------------------------------------
//enum enNumberType{ Odd = 1 , Even = 2 };
//
//int ReadNumber() {
//    int Num;
//    cout << "Please Enter the Number to Check : \n";
//    cin >> Num;
//    return Num;
//
//}
//
//
//enNumberType CheckNumberType(int Num) {
//    int result = Num % 2;
//    if (result == 0)
//        return enNumberType::Even;
//    else
//        return enNumberType::Odd;
//
//}
//
//
//void PrintNumberType(enNumberType NumberType) 
//{
//    if (NumberType == enNumberType::Even)
//    {
//        cout << "\n This Number Is Even .\n";
//    }
//    else 
//        cout << "\n This Number Is Odd .\n";
//
//}


// if age > 21 and has driverlicense = > hired however = > rejected;

struct StInfo 
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

StInfo ReadToHire()
{
    StInfo hire1;
    cout << "Please Enter Your Age : \n";
    cin >> hire1.Age;
    cout << "Please response (Are You Have a DrivingLicense or No : \n";
    cin >> hire1.HasDrivingLicense;
    cout << "Are you Have a Recommendation : \n";
    cin >> hire1.HasRecommendation;
    return hire1;

}

bool CheckToHired(StInfo hire1)
{
    if (hire1.HasRecommendation)
    {
        return true;
    }
    else
        return (hire1.Age > 21 && hire1.HasDrivingLicense );

}

void Printresults(StInfo hire1)
{
    if (CheckToHired(hire1))
        cout << "You Hired .\n";
    else
        cout << "You Rejected .\n";
}











int main()
{
    //problem 1,2
    //PrintName(ReadName());
    //-----------------------------------------------
    //Problem 3
    //-----------------------------------------------
    //PrintNumberType(CheckNumberType(ReadNumber()));
    //-----------------------------------------------
    //Problem 4
    //-----------------------------------------------

    Printresults(ReadToHire());



    return 0;
}
