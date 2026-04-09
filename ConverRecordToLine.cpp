#include<iostream>
#include<string>
using namespace std;
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
sClient ReadClient()
{
	sClient Client;
	cout << " Enter Account Number ";
	getline(cin, Client.AccountNumber);
	cout << " Enter Pin Code ";
	getline(cin, Client.PinCode);
	cout << " Enter Name ";
	getline(cin, Client.Name);
	cout << " Enter Phone Number ";
	getline(cin, Client.Phone);
	cout << " Enter Account Balance ";
	cin >> Client.AccountBalance;
	return Client;
}
string ConverRecordToLine(sClient Client, string Seperator = " #//# ")
{
	string sRecordDate = "";
	sRecordDate += Client.AccountNumber + Seperator;
	sRecordDate += Client.PinCode + Seperator;
	sRecordDate += Client.Name + Seperator;
	sRecordDate += Client.Phone + Seperator;
	sRecordDate += to_string(Client.AccountBalance );
	return sRecordDate;

}
int main()
{
	cout << " Enter Client Date " << endl;
	sClient Clinet ;
	Clinet = ReadClient();
	cout << "\n\n Client Record for Saving is \n";
	cout << ConverRecordToLine(Clinet) << endl;
	system("pause>0");
	





}