#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
	string S1;
	cout << " \n Enter astring :\n";
	getline(cin, S1);
	return S1;
}
short CountWords(string S1)
{
	string Delimiter = " ";
	cout << "\n The Number of the words in string is: \n";
	short Count = 0;
	short Pos = 0;string Word;
	while ((Pos = S1.find(Delimiter)) != std::string::npos)
	{
		Word = S1.substr(0, Pos);
			if (Word != "")
			{
				Count++;
		    }
			S1.erase(0, Pos + Delimiter.length());
	}
	if (S1 != "")
	{
		Count++;
	}
	return Count;
		
}
int main()
{
	

cout<< 	CountWords(ReadString());
return 0;
}