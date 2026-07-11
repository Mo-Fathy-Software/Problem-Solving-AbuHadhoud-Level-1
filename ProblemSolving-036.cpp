
#include <iostream>
using namespace std;
//First Solving.
//void ReadValues(float& Number1 , float& Number2 , string& Operation)
//{
//	cout << "Please Enter the Number 1 : " << endl;
//	cin >> Number1;
//	cout << "Please enter the Number 2 : " << endl;
//	cin >> Number2;
//	cout << "Please enter the Operation : " << endl;
//	cin >> Operation;
//
//}
//float Calculater(float Number1, float Number2, string Operation)
//{
//	if (Operation == "+")
//		return Number1 + Number2;
//	else if (Operation == "-")
//		return Number1 - Number2;
//	else if (Operation == "/")
//	{
//		if (Number2 == 0)
//		{
//			cout << "(Invalid Division.)" << endl;
//			return 0;
//		}
//		else
//			return Number1 / Number2;
//	}
//	else if (Operation == "*")
//		return Number1 * Number2;
//	else
//		return 0;
//}
//
//void PrintResults(float result)
//{
//
//	cout << result << endl;
//}
//
//int main()
//{
//	float Number1, Number2;
//	string Operation;
//	ReadValues(Number1, Number2, Operation);
//	PrintResults(Calculater(Number1, Number2, Operation));
//}


//Last Solving .

enum enOperationType
{
	Add = '+',
	Subtract = '-',
	Multiply = '*',
	Divide = '/'
};

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter Operation Type ( + , - , * , / )? \n";
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	
	
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		if (Number2 == 0)
		{
			cout << "Error Because Zero Divide?" << endl;
			return 0;
		}
		return Number1 / Number2;
	default:
		cout << "Invalid Operation Input?" << endl;
		
	}
}

int main()
{
	float Number1 = ReadNumber("Please enter Number 1 : ");
	float Number2 = ReadNumber("please enter Number 2 : ");

	enOperationType OpType = ReadOpType();

	cout << "\n" << "Result = " << Calculate(Number1, Number2, OpType);
}

// End Coding