#include <iostream> 

using namespace std;

// создается динамический массив :)
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

int main()
{
	int size = 5;
	cin >> size;
	int* ARR = Creater(size);
	Print(ARR, size);
	delete[] ARR;
	return 0;
}

