#include <iostream> 
#include <cassert> 
#include <vector>
using namespace std;

int main()
{
	vector<int> first = { 1,2,3 };
	vector<int> second = { 9,8,7 };
	vector<int> third;

	for (size_t i = 0; i < first.size(); ++i) {
		third.push_back(first[i] + second[i]);

	}

	for (size_t i = 0; i < third.size(); ++i) {
		cout << third[i] << ' ';
	}
	cout << endl;

	third.push_back(5);
	cout << third.size() << endl;
	for (size_t i = 0; i < third.size(); ++i) {
		cout << third[i] << ' ';
	}
	return 0;
}