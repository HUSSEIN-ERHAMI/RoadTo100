#include <iostream>
#include<string>
using namespace std;
struct stPiggyBankContent
{
	int Penny, Nickel, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent TotalPinnPiggyBankContentes;
	cout << "Enter The Total Pinnes " << endl;
	cin >> TotalPinnPiggyBankContentes.Penny;
	cout << "Enter the total Nickel " << endl;
	cin >> TotalPinnPiggyBankContentes.Nickel;
	cout << "Enter the total Dimes " << endl;
	cin >> TotalPinnPiggyBankContentes.Dimes;
	cout << "Enter the total Quarters " << endl;
	cin >> TotalPinnPiggyBankContentes.Quarters;
	cout << "Enter the total Dollars " << endl;
	cin >> TotalPinnPiggyBankContentes.Dollars;
	return TotalPinnPiggyBankContentes;
}
int CalculateTotalPinnies(stPiggyBankContent& PiggyBankContent)
{
	int TotalPennies = 0;
	TotalPennies = PiggyBankContent.Penny * 1 + PiggyBankContent.Nickel * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
	return TotalPennies;
}
int main()
{
	int TotalPennies = CalculateTotalPinnies(ReadPiggyBankContent());
	cout << endl << "Total Pinnes " << TotalPennies << endl;
	cout << endl << "Total Dollars " << (float)TotalPennies/100 << endl;
	return 0;
}

