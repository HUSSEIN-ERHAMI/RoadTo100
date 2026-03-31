#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\n Enter aString\n";
	getline(cin, S1);
	return S1;
}
char ReadChar()
{
	char C1;
	cout << "\n Enter a Character\n";
	cin >> C1;
	return C1;
}
int CountLetter(string S1, char C1)
{
	int Counter = 0;
	for (int i = 0; i < S1.length();i++)
	{
		if (S1[i] == C1)
		{
			Counter++;
		}
	}
	return Counter;
}
int main()
{
	string S1 = ReadString();
	char C1 = ReadChar();
	cout << " Letter" << C1 << " Count " << CountLetter(S1, C1);
	return 0;
}