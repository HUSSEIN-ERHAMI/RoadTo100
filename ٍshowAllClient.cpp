#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std;
const string ClientFileName = "HusseinClient.txt";
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
	cout << " Enter Accoun Number : ";
	getline(cin >> ws, Client.AccountNumber);
	cout << " Enter Pin Code : ";
	getline(cin, Client.PinCode);
	cout << " Enter Name : ";
	getline(cin, Client.Name);
	cout << " Enter Phone Number : ";
	getline(cin, Client.Phone);
	cout << " Enter Account Balance : ";
	cin >> Client.AccountBalance;
	return Client;
}
string ConvertRecordToLine(sClient Client, string Seperater = " #//# ")
{
	string Line = "";
	Line += Client.AccountNumber + Seperater;
	Line += Client.PinCode + Seperater;
	Line += Client.Name + Seperater;
	Line += Client.Phone + Seperater;
	Line += to_string(Client.AccountBalance);
	return Line;
}
vector<string>SpliteString(string S1, string Delem)
{
	vector <string> vClient;
	short Pos = 0;
	string sWord;
	while ((Pos = S1.find(Delem)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos);
		if (sWord != "")
		{
			vClient.push_back(sWord);
		}
		S1.erase(0, Pos + Delem.length());
	}
	if (S1 != "")
	{
		vClient.push_back(S1);
	}
	return vClient;
}
sClient ConvertLineToRecord(string Line, string Seperater = "#//#")
{
	sClient Client;
	vector<string> vClient;
	vClient = SpliteString(Line, Seperater);
	Client.AccountNumber = vClient[0];
	Client.PinCode = vClient[1];
	Client.Name = vClient[2];
	Client.Phone = vClient[3];
	Client.AccountBalance = stod(vClient[4]);
	return Client;
}
vector<sClient> LoadDateFromFile(string FileName)
{
	vector<sClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClient.push_back(Client);
		}
		MyFile.close();
	}
	return vClient;
}
void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}
void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
		cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}
void AddDateToFile(string FileName, string stClientDate)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stClientDate << endl;
		MyFile.close();
		}
	
}
void AddNewClient()
{
	sClient Client;
	Client = ReadClient();
	AddDateToFile(ClientFileName, ConvertRecordToLine(Client));
}
void AddClient()
{
	cout << "\n Enter Client Date \n";
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "\n Add New Client \n";
		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients ? Y / N ? ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}


int main()
{
	//AddClient();
	vector<sClient> vClient = LoadDateFromFile(ClientFileName);
	PrintAllClientsData(vClient);
	system("pause<0");
}