#include<iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(int from,int to)
{
	int Grad;
	do 
	{
		cout << "Please enter Grad Between 0 to 100" << endl;
		cin >> Grad;

	} while (Grad < from || Grad> to);
	return Grad;
}
char ChickResultGard(int Grad)

{
	if (Grad >= 90)
		return 'A';
	else if (Grad >= 80)
		return'B';
	else if (Grad >= 70)
		return 'C';
	else if (Grad >= 60)
		return 'D';
	else if (Grad >= 50)
		return 'E';
	else
		return 'F';
	
}
int main()
{
	cout << " result = "  << ChickResultGard(ReadPositiveNumber(0, 100));

}