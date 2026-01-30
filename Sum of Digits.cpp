#include<iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Num = 0;
	do
	{
		cout << message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}
  int SumOfDigits(int Num)
{
	int Remainder = 0, sum = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		cout  << Remainder << endl;
		sum = sum + Remainder;


	}return sum;
	
	
}
int main()
{
cout << "sum Of digits :"<<	SumOfDigits(ReadPositiveNumber("Please enter number"));
return 0;
}