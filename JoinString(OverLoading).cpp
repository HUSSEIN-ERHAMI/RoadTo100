#include<iostream>
#include<string>
#include<vector>
using namespace std;
string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string JoinString(string Arr[], short length, string Delim)
{
	string S1 = "";
	for (short i = 0;i < length;i++)
	{
		S1 = S1 + Arr[i] + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());

}

int main()
{
	vector<string> vString = { "ali","Hussein","Maher","Fadi" };
	string Arr[] = { "ali","Hussein","Maher","Fadi" };
	cout << "\n vector after Join\n";
	cout << JoinString(vString, " ");
	cout << "\n arr after Join\n";
	cout << JoinString(Arr, 4, " , ");
	return 0;
}