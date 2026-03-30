#include<iostream>
#include<string>
using namespace std;
string ReadWords()
{
	string S1;
	cout << " Enter a String: ";
	getline(cin, S1);
	return S1;
}
void PrintFirstLetterOfEachWord(string S1)
{
	bool  IsFirtLetter = true;
	cout << "\n The first Letter of Each Word is : \n";
	for (int i = 0;i < S1.length();i++)
	{
		if (S1[i] != ' ' && IsFirtLetter)
		{
			cout << S1[i] << "  ";
		}
		IsFirtLetter = (S1[i] == ' ' ? true : false);
	}
}

int main()
{
	PrintFirstLetterOfEachWord(ReadWords());
	return 0;

}