#include<iostream>
#include<cmath>
using namespace std;
enum enPrimNotPrim {Prim=1,NotPrim=2};
enPrimNotPrim CheckPrim(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2;Counter <= M; Counter++)
	{

		if (Number % Counter == 0)
			return enPrimNotPrim::NotPrim;
	}

	return enPrimNotPrim::Prim;
	
}

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillRandomNumber(int arr[100], int& arrlength)
{
	cout << "\n Please enter Array Length ? ";
	cin >> arrlength;
	for (int i = 0; i < arrlength ; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void CopyOnlyPrimNumber(int arrSource[100], int arrDestination[100], int arrlength, int& arr2length)
{
	int Counter = 0;
	for (int i = 0;i < arrlength;i++)
	{
		if (CheckPrim(arrSource[i]) == enPrimNotPrim::Prim)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}

	}
	arr2length = --Counter;
}
void PrintArrayRandom(int arr[100], int arrlength)
{
	for (int i = 0;i < arrlength;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arrlength;

	FillRandomNumber(arr1, arrlength);

	int arr2[100], arr2length = 0;
	CopyOnlyPrimNumber(arr1, arr2, arrlength, arr2length);

	cout << " \n Array 1 Elements :\n";
	PrintArrayRandom(arr1, arrlength);

	cout << "\n Array 2 Elements :\n";
	PrintArrayRandom(arr2, arr2length);
	return 0;

}