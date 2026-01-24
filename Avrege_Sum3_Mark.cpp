#include<iostream>
#include<string>
using namespace std;
void ReadMark(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "\nPlease Enter Mark1" << endl;
	cin >> Mark1;
	cout << "\n please Enter Mark2" << endl;
	cin >> Mark2;
	cout << "\n please Enter Mark3" << endl;
	cin >> Mark3;
}
int Sum3Marks(int Mark1, int Mark2, int Mark3)
{
	return (Mark1 + Mark2 + Mark3) ;

}
float AverageMark(int Mark1, int Mark2, int Mark3)
{
	return (float)Sum3Marks(Mark1, Mark2, Mark3) / 3;
}
void PrintAverageMarks(float Avreage)
{
	cout << " The Arearge 3 Marks is : " << Avreage << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMark(Mark1, Mark2, Mark3);
	PrintAverageMarks(AverageMark(Mark1, Mark2, Mark3));
	return 0;
}