#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\n Please Enter a string \n";
	getline(cin, S1);
	return S1;
}
string RemovePunctuations(string S1)
{
	string S2 = "";
	for (int i = 0;i < S1.length();i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}
int main()
{

	string S1, S2;
	S1 = ReadString();
	cout << "\n the string after removing Punctuations :\n";
	cout << RemovePunctuations(S1);
	return 0;



}