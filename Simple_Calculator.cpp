#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum enOprationType
{
	add = '+', sub = '-', mul = '*', divide = '/'
};
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}
enOprationType ReadOpreationType()
{
	char OT = '+';
	cout << "Chose the Oprator type (+),(-),(*),(/)" << endl;
	cin >> OT;
	return (enOprationType)OT;

}
float Calculate(float Number1, float Number2, enOprationType OPtype)
{
	switch (OPtype)
	{
	case enOprationType::add:
			return Number1 + Number2;
	case enOprationType::sub:
		return Number1 - Number2;
	case enOprationType::mul:
		return Number1 * Number2;
	case enOprationType::divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
			
	}
}
int main()
{
	float Number1 = ReadNumber("Please Enter Number1");
	float Number2 = ReadNumber("Please Enter Number2");
	enOprationType OPtype = ReadOpreationType();
	cout << endl << "result = " << Calculate(Number1, Number2, OPtype) << endl;
	return 0;
}