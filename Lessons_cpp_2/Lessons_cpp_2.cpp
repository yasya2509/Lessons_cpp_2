#include <iostream> 
using namespace std;

int* Sum(int a, int b) {
	int* dinamic = new int;
	*dinamic = a + b;
	return dinamic;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int* barbecue = Sum(a, b);
	cout << *barbecue << endl;

	delete barbecue;

	return 0;
}