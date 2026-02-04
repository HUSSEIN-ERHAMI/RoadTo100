#include<iostream>
using namespace std;
string ReadPassword()
{
	string Password;
	cout << "Please Enter Your Password 3 Letter" << endl;
	cin >> Password;
	return Password;

}
bool CheckPassword(string OrgenalPassword)
{
	string word;
	int Counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << "Trial [ " << Counter << " ]:" << word << endl;
				if (word == OrgenalPassword)
				{
					cout << " Password is " << word << endl;
					cout << "Found after " << Counter << " Trials" << endl;
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}
int main()
{
	
	CheckPassword(ReadPassword());
	return 0;
}

	

