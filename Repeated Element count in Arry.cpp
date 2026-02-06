#include<iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void ReadArray(int arr[100], int& arrlength)
{
	cout << " Enter the number of elements " << endl;
	cin >> arrlength;
	cout << " Enter the elements of the array " << endl;
	for (int i = 0;i < arrlength; i++)
	{
		cout << " Element ["<< i+1<< "] = ";
		cin >> arr[i];
	}
	cout << endl;
}
void PrintArray(int arr[100], int& arrlength)
{
	for (int i = 0;i < arrlength;i++)
	{
		cout << arr[i] << " ";
		
	}
	
}
int TimesRepeated(int arr[100], int arrlength, int Number)
{
	int Count = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (Number == arr[i])
		{
			Count++;
		}
	}
	return Count;
}



int main()
{
	int arr[100], arrlength, NumberTocheck;
	ReadArray(arr, arrlength);
	NumberTocheck = ReadPositiveNumber(" Enter the number to check its repetitions in the array ");
	cout << "\n Orgenal Array is : " ;
	PrintArray(arr, arrlength);
	cout << "\n The number " << NumberTocheck << endl;
	cout << " is repeated " ;
	cout << TimesRepeated(arr, arrlength, NumberTocheck) << " times in the array " << endl;
	return 0;


}