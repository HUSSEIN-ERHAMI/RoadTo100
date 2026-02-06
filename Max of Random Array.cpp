#include<iostream>
using namespace std;
int RandomNummber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillArray(int arr[100], int& arrlength)
{
	cout <<" Enter the length of the array: ";
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNummber(1, 100);

	}
}
int   MaxOfArray(int arr[100], int arrlength)
{
	int Max = arr[0];
	for (int i = 1; i < arrlength; i++)
	{
		if (arr[i] < Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}
void PrintArray(int arr[100], int arrlength)
{
	
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[100], arrlength;

	FillArray(arr, arrlength);
	cout << "Array Elements :" << endl;
	PrintArray(arr, arrlength);
	cout << " \n The maximum number in the array is: " << MaxOfArray(arr, arrlength) << endl;

}