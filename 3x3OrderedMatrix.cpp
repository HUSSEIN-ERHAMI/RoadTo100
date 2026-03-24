#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void FillMatrix(int arr[4][4],short Row,short Cols)
{
	int num = 0;
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Cols;j++)
		{
			num++;
			arr[i][j] = num;
			

		}
	}
}
void PrintMatrixOrdered(int arr[4][4],short Row,short Cols)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Cols;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}
int main()
{
	int arr[4][4];
	FillMatrix(arr,4,4);
	PrintMatrixOrdered(arr,4,4);
}
