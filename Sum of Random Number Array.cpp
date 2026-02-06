#include<iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayElement(int arr[100], int& arrlength)
{
	cout << "Enter the length of array: "<<endl;
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);

	}
}
void PrintArrayElement(int arr[100], int arrlength)
{
	
	for (int i = 0; i < arrlength;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
int SumOfArrayElement(int arr[100], int arrlength)
{
	
	int sum = 0;
	for (int i = 0; i < arrlength; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;
	FillArrayElement(arr, arrlength);

	cout << "Array elememnts:\n " << endl;
	PrintArrayElement(arr, arrlength);
	cout << "Sum of array elements: \n" << endl;
	cout << SumOfArrayElement(arr, arrlength);
		
	
}