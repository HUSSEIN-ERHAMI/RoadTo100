#include<iostream>
#include<string>
using namespace std;
float ositiveNumber(string message)
{
	int NumberOfHours;
	do {
		cout << message << endl;
		cin >> NumberOfHours;
	} while (NumberOfHours < 0);
	return NumberOfHours;
}
float HoursOfDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}
float HoursOfWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}
float DaysToWeek(float NumberOfDays)
{
	return (float)NumberOfDays / 7;

}
int main()
{
	float NumberOfHours = ositiveNumber("Please Enter Number Of Hours");
	float NumberOfDays = HoursOfDays(NumberOfHours);
	float NumberOfWeek = DaysToWeek(NumberOfDays);
	cout << endl;
	cout << "Total Hours :" << NumberOfHours << endl;
	cout << "Number Of Days :" << NumberOfDays << endl;
	cout << "Number Of Week" << NumberOfWeek;
}