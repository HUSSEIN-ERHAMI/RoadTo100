#include<iostream>
#include<string>
using namespace std;
enum enRandomType { CapitalLetter=1,SmallLetter =2, Digit =3, characterType=4};
int RandomChar(int From , int To)
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
	case enRandomType::CapitalLetter:
	{
		return char(RandomChar(65, 90));
		break;
	}
	case enRandomType::characterType:
	{
		return char(RandomChar(33, 47));
		break;
	}
	case enRandomType::Digit:
	{
		return char(RandomChar(48, 57));
		break;
	}

	}
}

int ReadPositiveNumber(string Message)
{
	int Num;
	do 
	{
		cout << Message << endl;
		cin >> Num;

	} while (Num <= 0);
	return Num;
}
string GenerateWord(enRandomType charType, short Length)
{
	string Word = "";
	for (int i = 0; i < Length; i++)
	{
		Word = Word + GetRandOmType(charType);

	}
	return Word;
}
string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enRandomType::CapitalLetter,4) + "-";
	Key = Key + GenerateWord(enRandomType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandomType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandomType::CapitalLetter, 4);
	return Key;
}
void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << " Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	GenerateKeys(ReadPositiveNumber("Enter Number Of Keys To Generate: "));
	return 0;
}