#include<iostream>
#include<string>

using namespace std;
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message<<endl;
	cin >> Number;
	return Number;
}
float SumNumber()
{
	int Sum = 0, Number = 0, counter = 1;
	do
	{
		Number = ReadNumber("Please Enter the Number " + to_string(counter));
		if (Number == -99)
		{
			break;
		}
		Sum += Number;
		counter++;
		
	} while (Number != -99);
	return Sum;
	
}


int main()
{
	cout << endl<< "Result = " << SumNumber();
	return 0;
}