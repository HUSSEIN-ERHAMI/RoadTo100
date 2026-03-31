#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\n Enter a string:\n";
	getline(cin, S1);
	return S1;	
}
char InvertCases(char CH1)
{
	return isupper(CH1) ? tolower(CH1) : toupper(CH1);

}
string InvertCase(string S1)
{
	for (int i = 0;i < S1.length();i++)
	{
	//	if (isupper(S1[i]))
	//	{
	//		S1[i] = tolower(S1[i]);
	//	}
	//	else if (islower(S1[i]))
	//	{
	//		S1[i] = toupper(S1[i]);
	//	}
		S1[i]= InvertCases(S1[i]);
	}
	
	return S1;
}
int main()
{
	string S1 = ReadString();
	S1 = InvertCase(S1);

	cout << "\n the string after inverting\n";
	cout << S1 << endl;
	return 0;
}