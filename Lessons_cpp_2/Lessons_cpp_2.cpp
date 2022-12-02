#include <iostream> 
using namespace std;


int main()
{
	int size = 5;
	cin >> size;
	int* arr = new int [size];
	for (int i = 0; i < size; i++)
	{
		arr[i]= 0;
		cout << arr[i] << endl;
	}
	delete [] arr;
	return 0;
}

