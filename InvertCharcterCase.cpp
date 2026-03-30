#include<iostream>
#include<string>
using namespace std;
char ReadChar()
{
	char CH1;
	cout << " \n Enter a Character: \n";
	cin >> CH1;
	return CH1;
}
char InvertLetterCase(char CH1)
{
	return isupper(CH1) ? tolower(CH1) : toupper(CH1);
}
int main()
{
	char CH1 = ReadChar();
	CH1 = InvertLetterCase(CH1);
	cout << "\n the inveted character is :" << endl;
	cout << CH1;
	return 0;
}