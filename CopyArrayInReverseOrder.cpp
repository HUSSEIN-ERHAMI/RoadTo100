#include<iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;

}
void FillArraywithRandNum(int arr1[100], int& arrlength)
{
	cout << "\n Please Enter How Many Elements ;\n ";
	cin >> arrlength;
	for (int i = 0;i <= arrlength;i++)
	
		arr1[i] = RandomNumber(1, 100);
	
}
void PrintArray(int arr1[100], int arrlength)
{
	for (int i = 0;i < arrlength;i++)
	{
		cout << arr1[i] << " ";
	}cout << endl;
}
void CopyArrayInReverseOrder(int arrsource[100], int arrDestination[100], int arrlength)
{
	for (int i = 0;i < arrlength;i++)
		arrDestination[i] = arrsource[arrlength - 1 - i];

}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], arrlength;
	FillArraywithRandNum(arr1, arrlength);
	int arr2[100];
	CopyArrayInReverseOrder(arr1,arr2, arrlength);
	cout << "\n Array 1 Elements : \n";
	PrintArray(arr1, arrlength);
	cout << "\n Array 2 Elements : \n";
	PrintArray(arr2, arrlength);
	return 0;
}