#include<iostream>
#include<string>
using namespace std;
string ReadPINcode()
{
	string PINcode ;
	cout << "Please Enter PINcode ?" << endl;
	cin >>PINcode;
	return PINcode;
}
bool Login()
{
	string PINcode;
	do 
	{
		PINcode = ReadPINcode();
		if (PINcode == "12345")
		{
			return 1;
		}
		else
		{
			cout << "\n Worng PIN"<<endl;
			system(" color 4F");
		}
	} while (PINcode != "12345");
	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "Your Account balance is " << 7500 << endl;
	};
	return 0;
}