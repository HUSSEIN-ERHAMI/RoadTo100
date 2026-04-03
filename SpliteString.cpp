#include<iostream>
#include<string>
#include<vector>
using namespace std;
string ReadString()
{
	string S1;
	cout << " Enter a string :" << endl;
	getline(cin, S1);
	return S1;
}
vector <string> SpliteString(string S1, string Delimeter)
{
	vector <string> vString;
	short Pos = 0;
	string sWord;
	while ((Pos = S1.find(Delimeter)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, Pos + Delimeter.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;

}

int main()
{
	vector<string> vString;
	vString = SpliteString(ReadString(), " ");
	cout << "\nTokens = " << vString.size() << endl;
	for (string& s : vString)
	{
		cout << s << endl;
	}
	system("pause>0");
}