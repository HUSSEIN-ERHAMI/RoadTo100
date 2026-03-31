#include<iostream>
#include<string>
using namespace std;
char ReadChar()
{
	char Ch1;
	cout << "\n Please Enter The Character :\n";
	cin >> Ch1;
	return Ch1;
}
bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);
	return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
}
int main()
{
	char Ch1 = ReadChar();
	if (IsVowel(Ch1))
	{
		cout << "\n Yes, letter " << Ch1 << " is a Vowel" << endl;
	}
	else
	{
		cout << "\n No, letter " << Ch1 << " is not a Vowel" << endl; 

	}
}