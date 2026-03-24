#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillArrayMatrix(int arr[3][3],short Row, short Cols)

{
	for (int i = 0;i < Row;i++)
	{
		for (short j = 0; j < Cols;j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
		
	}
}
void PrintArrayMatrix(int arr[3][3], short Row, short Cols)
{
	for (short i = 0; i < Row;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;

	}
}
int SumEachCol(int arr[3][3], short Row, short ColNumber)
{
	int Sum = 0;
	for (short i = 0;i <= Row -1; i++)
	{
		Sum += arr[i][ColNumber];
	}
	return Sum;
}
void PrintSumEchCol(int arr[3][3], short Row, short Col)
{
	for (short j = 0; j < Col ;j++)
	{
		cout << " the sum of column" << j + 1 << " is :" << SumEachCol(arr, Row, j) << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillArrayMatrix(arr, 3, 3);
	PrintArrayMatrix(arr, 3, 3);
	cout << " \n the sum of each Column is : " << endl;
	PrintSumEchCol(arr, 3, 3);
	system("pause>0");

}