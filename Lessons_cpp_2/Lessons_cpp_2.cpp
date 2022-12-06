#include <iostream> 

using namespace std;

int* Creater(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	return arr;
}

void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int* SumArr(int* arr1,int* arr2, int size)
{
	int* ARR = Creater(size);
	for (int i = 0; i < size; ++i)
	{
		ARR[i] = arr1[i] + arr2[i];
	}
	return ARR;
}

int main()
{
	const int size = 5;
	int arr1[size] = { 1,2,3,4,5 };
	int arr2[size] = { 9,8,7,6,5 };
	int* sum = SumArr(arr1, arr2, size);
	Print(sum, size);
	delete[] sum;
	return 0;

}

