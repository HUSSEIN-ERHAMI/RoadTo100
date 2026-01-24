#include<iostream>
#include<string>
using namespace std;
enum enNumberType{odd=1,even=2};
int ReadNumber()
{
	int num;
	cout << "plases enter your number " << endl;
	cin >> num;
	return num;
}
enNumberType ChickNumber(int num)
{
	int result = num % 2;
	if (result == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}
void PrintNumber(enNumberType NumberType)
{
	if (NumberType == enNumberType::even)
		cout << "number is : Even" << endl;
	else
		cout << "Number is : Odd" << endl;
}
int main()
{
	PrintNumber(ChickNumber(ReadNumber()));
	return 0;
}
