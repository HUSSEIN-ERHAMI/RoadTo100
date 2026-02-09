#include<iostream>
using namespace std;
int RandomArray(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}
void FillRandElements(int arr[100], int& arrlength)
{
	cout << "\n Please Enter Number Of Array " << endl;
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomArray(1, 100);
	}

}
void PrintArrayElements(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength;i++)
	{
		cout << arr[i] << " ";
	}
}
void CopyArray(int arrSource[100], int arrDestination[100], int arrlength)
{
	for (int i = 0; i < arrlength;i++)
		arrDestination[i] = arrSource[i];
}


int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], arrlenght;
	FillRandElements(arr1,arrlenght);
	int arr2[100];
	CopyArray(arr1, arr2, arrlenght);
	cout << "\n Array 1 Elements : \n";
	PrintArrayElements(arr1, arrlenght);
	cout << "\n Array 2 after Copye \n ";
	PrintArrayElements(arr2, arrlenght);
	return 0;

}