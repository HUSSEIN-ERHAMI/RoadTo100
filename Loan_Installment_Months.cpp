#include<iostream>
#include<cmath>
#include<string>
using namespace std;
float ReadPositiveNumber(string message)
{
	float Num = 0;
	do 
	{
		cout << message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}
float CalculateLoanInstallmentMonths(float LoanAmount, float MonthlyPament)
{
	return (float)LoanAmount / MonthlyPament;
}
int main()
{
	float LoanaMount = ReadPositiveNumber(" Please Enter Loan Amount ?");
	float MonthlyPament = ReadPositiveNumber(" Please Enter Loan Monthly Pament ?");
	cout << "Total Months to Pay " << CalculateLoanInstallmentMonths(LoanaMount, MonthlyPament) << endl;
	return 0;

}
