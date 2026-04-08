#include<iostream>
#include<string>
using namespace std;
string RePlaceWord(string S1, string StringToReplace, string ReplaceTo)
{
	short Pos = S1.find(StringToReplace);
	while (Pos != std::string::npos)
	{
		S1 = S1.replace(Pos, StringToReplace.length(), ReplaceTo);
		Pos = S1.find(StringToReplace);
		
	}
	return S1;

}
int main()
{
	string S1 = "\n I am a Student. I love Programing, and i Love Gemini\n";
	string StringToReplace = "Programing";
	string ReplaceTo = " Coding";
	cout << " Orginal String :" << S1 << endl;
	cout << " String To Replace:" << RePlaceWord(S1, StringToReplace, ReplaceTo) << endl;
	return 0;

}