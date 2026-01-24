#include<iostream>
#include<string>
using namespace std;
enum  enBassFail { Bass=1, Fail =2};
int ReadMark()
{
	int Num;
	cout << "\nplease Enter Your Mark" << endl;
	cin >> Num;
	return Num;
}
enBassFail ChickMark(int Num)
{
	if (Num >= 50)
		return enBassFail::Bass;
	else
		return enBassFail::Fail;
		
}
void printResultMark(int Num)
{
	if (ChickMark(Num) == enBassFail::Bass)
		cout << "\nyou Are Bass" << endl;
	else
		cout << "\nYou are Fail" << endl;
}

int main()
{
	printResultMark(ReadMark());
	return 0;

}