#include<iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;

}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Please enter the length of the array\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
	void PrintArray(int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << " "; 
			
		}
		cout << endl;
	}

	int main()

	{
		srand((unsigned)time(NULL));
		int arr[100], arrLength;
		FillArrayWithRandomNumbers(arr, arrLength);
		cout << "The array Elements :\n"<<endl;
		PrintArray(arr, arrLength);
	}