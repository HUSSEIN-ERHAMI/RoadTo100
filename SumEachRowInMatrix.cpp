#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To-From + 1) + From;
	return RandNum;
}
void FillMatrixwhithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			arr[i][j] = RandomNumber(1, 10);

		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows;i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}
int SumEachRow(int arr[3][3], short RowNumber, short Cols)
{
	int sum = 0;
	for (short j = 0; j <= Cols - 1; j++)
	{
		sum += arr[RowNumber][j];
	}
	return sum;
	
}
void sumMatrixRowInArray(int arr[3][3], int arrsum[3], short Row, short Cols)
{
	for (short i = 0; i < Row; i++)
	{
		arrsum[i] = SumEachRow(arr, i, Cols);
	}
		
	
}
void PrintSumOfEachRowInArray(int arrsum[3], short Row)
{
	for (short i = 0; i < Row;i++)
	{
		cout << " the Sum of Row " << i + 1 << " " << arrsum[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrsum[3];
	FillMatrixwhithRandomNumbers(arr, 3, 3);
	cout << " The martrix is :\n";
	PrintMatrix(arr, 3, 3);
	sumMatrixRowInArray(arr, arrsum, 3, 3);
	PrintSumOfEachRowInArray(arrsum, 3);
     



}

