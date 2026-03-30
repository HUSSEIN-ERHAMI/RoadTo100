#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\n Please Enter the string \n";
	getline(cin, S1);
	return S1;
}
string UpperFirstLetterOfEach(string S1)
{
	bool IsFirstLetter = true;
	for (short i = 0;i < S1.length();i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			S1[i] = toupper(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);

	}
	return S1;
}
int main()
{
	string S1 = ReadString();
	
	cout << "\n The String after converting  \n" << endl;
	S1 = UpperFirstLetterOfEach(S1);
	cout << S1;
	return 0;
}