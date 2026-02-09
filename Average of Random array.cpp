#include<iostream>
using namespace std;
int RandomNumber(int From , int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}						
void FillRandomArray(int arr[100], int& arrlength)
{
	cout << "\n Please Enter Array length" << endl;
	cin >> arrlength;
	for (int i = 0; i < arrlength;i++)
	{
		  arr[i] = RandomNumber(1, 100);
		  
	}
	
}
void PrintRandomNumber(int arr[100], int arrlength)
{
	for (int i = 0;i < arrlength;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << " " << endl;
}
float  SumElementsRandomNumber(int arr[100], int arrlength)
{
	int sum = 0; 
	for (int i = 0; i < arrlength;i++)
	{
		sum += arr[i];
		
	}
	return sum;

}
float AvregeOfElements(int arr[100], int arrlength)
{
	
	return (float)SumElementsRandomNumber(arr, arrlength) / arrlength;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;
	FillRandomArray(arr, arrlength);
	cout << "\n Array elements: \n" ;
	PrintRandomNumber(arr, arrlength);
	cout << " Avrege of All Elements:\n";
	cout <<AvregeOfElements(arr, arrlength);
}