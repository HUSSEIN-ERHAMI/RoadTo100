#include<iostream>
#include<cstdlib>
using namespace std;
enum enRandomType
{
	SmallLetter = 1, capitalLetter = 2, SpecialCharecter = 3, DigitOrder = 4
};

int RandomChar(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
char GetRandOmType(enRandomType charType)
{
	switch (charType)
	{
	case enRandomType::SmallLetter:
	{
		return char(RandomChar(97, 122));
		break;
	}

	case enRandomType::capitalLetter:
	{
		return char(RandomChar(65, 90));
		break;
	}
	case enRandomType::DigitOrder:
	{
		return char(RandomChar(48, 57));
		break;

	}
	case enRandomType::SpecialCharecter:
	{
		return char(RandomChar(33, 47));
		break;
	}
	}

}
int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandOmType(enRandomType::SmallLetter) << endl;
	cout << GetRandOmType(enRandomType::capitalLetter) << endl;
	cout << GetRandOmType(enRandomType::SpecialCharecter) << endl;
	cout << GetRandOmType(enRandomType::DigitOrder) << endl;
	return 0;
}
