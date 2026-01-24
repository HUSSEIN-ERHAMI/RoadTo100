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
	} while (Number < 0);
	return Number;
	
}
int Factoral(int Number)
{
	int F = 1;
	for (int counter = Number;counter >= 1;counter--)
	{
		F = F * counter;
	}
	return F;
}
int main()
{
	cout << Factoral(ReadPositiveNumber("Please Enter Number")) << endl;
	return 0;
}