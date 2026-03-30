
#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << " \n Enter a String :";
	getline(cin, S1);
	return S1;
}
string LowerAllLetterOfString(string S1)
{
	for (int i = 0;i < S1.length();i++)
	{
		S1[i] = tolower(S1[i]);
		
	}
	return S1;

}
string UpperAllLetterOfString(string S1)
{
	for (int i = 0;i < S1.length();i++)
	{
		S1[i] = toupper(S1[i]);

	}
	return S1;

}
int main()
{
	string S1 = ReadString();
	cout << " \n Lower case of string is :\n";
	S1 = LowerAllLetterOfString(S1);
	cout << S1;
	S1 = UpperAllLetterOfString(S1);
	cout << " \n Upper case od string is :\n";
	cout << S1;
}