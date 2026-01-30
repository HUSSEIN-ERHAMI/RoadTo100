#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Num;
	do
	{
		cout << message;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}
void PrintDigits(int Num)
{
	int Remainder = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		cout << Remainder << endl;
	}
}
int main()
{
	PrintDigits(ReadPositiveNumber("Please Enter a positive Number ?\n\n"));
}