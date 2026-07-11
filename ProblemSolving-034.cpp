//Comission Persentage

#include<iostream>
using namespace std;
float ReadTotalSales()
{
	int TotalSales;
	cout << "Please enter the total sales : " << endl;
	cin >> TotalSales;
	return TotalSales;
}

float CalculatePersentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
	return CalculatePersentage(TotalSales)* TotalSales;

}
int main()
{
	float TotalSales;
	float Persentage = CalculateTotalComission(ReadTotalSales());
	cout << Persentage;

}