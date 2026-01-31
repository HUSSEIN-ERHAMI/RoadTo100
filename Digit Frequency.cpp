#include<iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Num;
	do
	{
		cout << message << endl;
		cin >> Num;
	} while (Num <= 0);
			return Num;
}
int CountDigitFrequency(short DigitToCheck, int Num)
{
	int FreqCount = 0; int Remainder = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		if (DigitToCheck ==Remainder )
		{
			FreqCount++;
		}
	}
	return FreqCount;
}
void PrintAllDigitFrequencies(int Num)
{
	cout << endl;
	for (int i = 0;i < 10;i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Num);
		if (DigitFrequency > 0)
		{
			cout << " Digit " << i << " Frequency is "<< DigitFrequency << " Time(s)" << endl;
		}

	}
}

int main()
{
	int Num = ReadPositiveNumber("Please Enter a Positive Number: ");
	PrintAllDigitFrequencies(Num);
	return 0;
}