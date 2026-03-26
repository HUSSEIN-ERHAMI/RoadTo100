
#include<iostream>
#include<string >
#include<iomanip>
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
		cout << endl;
	}
}
bool IfTheNumberIsFound(int arr[3][3], int Number, short Rows, short Cols)

{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			if (arr[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);
	cout << "\n the Matrix is : \n";
	PrintMatrix(arr, 3, 3);
	int Number;
	cout << " Please Enter the number to look for you?\n";
	cin >> Number;
	if (IfTheNumberIsFound(arr, Number, 3, 3))

		cout << " Yes it is There \n";
	else cout << " No it is Not there \n";
	

}