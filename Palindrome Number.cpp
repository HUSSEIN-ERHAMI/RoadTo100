#include<iostream>
#include<string>
using namespace std;
int  ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
int ReverseNumber(int Number)
{
	int Remainder, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number= Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}
bool IsPalindrome(int Number)
{
	return Number== ReverseNumber(Number);
}
int main()
{
	int Number = ReadPositiveNumber("Please Enter Positive Number");
	if (IsPalindrome(Number))
		cout << "yes it is a Palinderome Number";
	else
		cout << "No , it is Not Palindreome Number";
	return 0;
}