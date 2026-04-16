#include<iostream>
#include<string>
using namespace std;
class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _EMail;
	string _Phone;

public:
	clsPerson(int ID,string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Phone = Phone;
		_EMail = Email;
	}
	int ID()
	{
		return _ID;
	}
	
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string LastName()
	{
		return _LastName;
	}
	
	void SetEmail(string Email)
	{
		_EMail = Email;
	}
	string Email()
	{
		return _EMail;
	}
	void PhoneNumber(string Phone)
	{
		_Phone = Phone;
	}
	string PhoneNumbe()
	{
		return _Phone;
	}
	string FullName()
	{
		return  _FirstName + " " + _LastName;
	}
	void PrintPerson()
	{
		cout << "Info : " << endl;
		cout << "____________________" << endl;
		cout << "ID         : " << _ID << endl;
		cout << "First Name : " << _FirstName << endl;
		cout << "Last Name  : " << _LastName << endl;
		cout << "Full Name  : " << FullName() << endl;
		cout << "Email      : " << _EMail << endl;
		cout << "Phone      : " << _Phone << endl;
		cout << "____________________" << endl;
	}
	void SendEmail(string S1,string S2)
	{
		cout << "The Following message sent successfully to Email: " << Email() << endl;
		;
		cout << "Subject :" << S1 << endl;
		
		cout << "Body:"<<S2 << endl;
	}
	void SendSMS(string S3)
	{
		cout << "The Following SMS sent successfully to SMS: " << PhoneNumbe() << endl;
		
		cout << S3 << endl;
	}

	


};
int main()
{
	clsPerson Person1(10, "Hussein", "Ali", "husseinalikroos@gmail.Com", "0774165454");
	Person1.PrintPerson();
	Person1.SendEmail("Hi", "How Are You");
	Person1.SendSMS("How Are You");
	system("pause>0");
	return 0;
}