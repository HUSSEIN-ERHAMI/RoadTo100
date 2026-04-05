#include<iostream>
#include<string>
#include<vector>
using namespace std;
string JoinString(vector<string> vString, string Delimiter)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delimiter;
	}
	return S1.substr(0, S1.length() - Delimiter.length());
}
int main()
{
	vector<string> vString = { "Hussein","Ali","Omar" };
	cout << "\n String after Joining:\n";
	cout << JoinString(vString, " @@ ");
	return 0;
}