#include<iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Num;
	do
	{
		cout << message << endl;
		cin >> Num;
	}while (Num <= 0);
	return Num;

}
int ReverseNumber(int Num)
{

	int Remainder = 0; int Num2 = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		Num2 = Num2 * 10 + Remainder;
	}
	return Num2;
}
int main()
{
	cout << "Reverse Number Program \n " << ReverseNumber(ReadPositiveNumber("Please Enter Number? "));
	return 0;
}