#include<iostream>
using namespace std;

void ReadNumber(int& Num1, int& Num2, int& Num3);
{
	cout << "Please enter Number1" << endl;
	cin >> Num1;
	cout << "Please enter Number2" << endl;
	cin >> Num2;
	cout << "Please enter Number3" << endl;
	cin >> Num3;

}
int ChickMaxNum(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2)
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;

	else
		if (Num2 > Num3)
			return Num2;
		else return Num3;
	
	
		

	
	

}
void PrintMaxNumber(int Max)
{
	cout << "the Max Number is " << Max << endl;
}
int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);

	PrintMaxNumber(ChickMaxNum(Num1, Num2, Num3));
}