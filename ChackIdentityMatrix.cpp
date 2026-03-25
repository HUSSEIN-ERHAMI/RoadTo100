
#include<iostream>
#include<string >
#include<iomanip>
using namespace std;
void PrintMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			cout << setw(3) << Matrix1[i][j] << "   ";
		}
		cout << endl;
	}
}
bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0;i < Rows;i++)
	{
		for (short j = 0;j < Cols;j++)
		{
			if (i == j && Matrix1[i][j] != 1)
			{
				return false;
			}
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	cout << " Matrix is : \n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsIdentityMatrix(Matrix1, 3, 3))
		cout << " \n Yes : The Matrix is Idenitiy";
	else cout << " \n No : The Matrix is not Identity";
}