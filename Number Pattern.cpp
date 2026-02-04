#include<iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	}while (Number <= 0);
	return Number;
}
void PrintNumberPattern(int Number)
{
	for (int i = 1;i<= Number;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			cout << i << " ";
		}
		cout << " " << endl;
	}
}
int main()
{
	PrintNumberPattern(ReadPositiveNumber("Please Enter Positive Number"));
	return 0;
}