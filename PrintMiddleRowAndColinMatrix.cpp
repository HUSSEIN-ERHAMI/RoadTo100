#include<iostream>
#include<string>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows; i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			Matrix1[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			printf("  %0*d  ", 2, Matrix1[i][j]);
		}
		cout << endl;
	}
	cout << endl;
}
void PrintMiddleRow(int Matrix1[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for (short j = 0;j < Cols;j++)
	{
		printf("  %0*d  ", 2, Matrix1[MiddleRow][j]);
	}
	cout << "\n";

}
void PrintMiddleCol(int Matrix1[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;
	for (short j = 0;j < Rows;j++)
	{
		printf(" %0*d  ",2,Matrix1[j][MiddleCol]);
	}
	cout << "\n";
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3];
	FillMatrix(Matrix1, 3, 3);
	cout << " The matrix is :\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << " The Middle Row is : \n";
	PrintMiddleRow(Matrix1, 3, 3);
	cout << " The Middle Column is :\n";
	PrintMiddleCol(Matrix1, 3, 3);
}