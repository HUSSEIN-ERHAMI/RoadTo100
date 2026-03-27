#include<iostream>
#include<string>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			cout << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}
short MinNumberForMatrix(int arr[3][3], short Rows, short Cols)
{
	short Min = arr[0][0];
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			if (arr[i][j] < Min)
			{
				Min = arr[i][j];
			}

		}
	}
	return Min;
}
short MaxNumberForMatrix(int arr[3][3], short Rows, short Cols)
{
	short Max = arr[0][0];
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			if (arr[i][j] > Max)
			{
				Max = arr[i][j];
			}

		}
	}
	return Max;

}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);
	cout << "\n The Matrix is : \n";
	PrintMatrix(arr, 3, 3);
	cout << "\n The Min Number int Matrix is : \n";
	cout << MinNumberForMatrix(arr, 3, 3) << endl;
	cout << "\n The Max Number in Matrix is : \n";
	cout << MaxNumberForMatrix(arr, 3, 3);
}