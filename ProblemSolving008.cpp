
#include <iostream>
using namespace std;

enum enCorrection { Pass = 1, Fail = 2 };

int ReadMark()
{
    int Mark;
    cout << "Please Enter Your Mark : \n";
    cin >> Mark;
    return Mark;
}

int TestMark(int Mark)
{
   
    if (Mark >= 50)
    {
        return enCorrection::Pass ;
    }
    else
    {
        return enCorrection::Fail;
    }
}


void PrintCorrection(int Mark)
{
    if (TestMark(Mark) == enCorrection::Pass)
        cout << "You Passed ." << endl;
    else
        cout << "You Failed ." << endl;
}




int main()
{
    PrintCorrection(ReadMark());
}
