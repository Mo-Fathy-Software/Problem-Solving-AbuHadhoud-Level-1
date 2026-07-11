#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadName()
{
    stInfo Info;
    cout << "Please Enter the First Name : \n";
    cin >> Info.FirstName;
    cout << "Please Enter the Last Name : \n";
    cin >> Info.LastName;

    return Info;

}

string Concatination(stInfo Info, bool Reversed)
{
    string FullName;
    if (Reversed)
    {
        FullName = Info.LastName + " " + Info.FirstName;
    }
    else
    {
        FullName = Info.FirstName + " " + Info.LastName;
    }
    
    
    return FullName;
    
}

void PrintFullName(string FullName)
{
    cout << FullName;
}




int main()
{
    string FullName;
    PrintFullName(Concatination(ReadName(), true));
}

