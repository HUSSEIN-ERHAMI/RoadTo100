#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}
void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows; i++)
	{
		for (short j = 0;j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows; i++)
	{
		for (short j = 0;j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << endl;
	}
}
bool AreMatrixTypical(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}
    }
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];
	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\n The Matrix1 is :\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	cout << "\n The Matrix2 is : \n";
	PrintMatrix(Matrix2, 3, 3);
	if (AreMatrixTypical(Matrix1, Matrix2, 3, 3))
		cout << " Yes : Both are Typical\n";
	else cout << "\n No : Both are Not Typcal";
}