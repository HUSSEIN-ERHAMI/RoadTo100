#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillMatrix(int arr1[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			arr1[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			printf("  %0*d  ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
bool AreEqualMatrix(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];
	FillMatrix(Matrix1, 3, 3);
	cout << " The Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrix(Matrix2, 3, 3);
	cout << " The Matrix 2 :\n";
	PrintMatrix(Matrix2, 3, 3);
	if (AreEqualMatrix(Matrix1, Matrix2, 3, 3))
		cout << " \n Yes : Both Matricse are Equal";
	else cout << " \n No : Both Matricse are Not Equal";


	return 0;

}