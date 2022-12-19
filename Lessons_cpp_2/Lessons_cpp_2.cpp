#include <iostream> 
#include <cassert> 
#include <vector>
using namespace std;
int SumElements(vector<int> third) 
{
	int sum_v_third = 0;
	for (size_t i = 0; i < third.size(); ++i) {
		sum_v_third += third[i];
			//cout << third[i] << endl;

	}
	return sum_v_third;
}

void Test() {
	vector<int> third = { 10,10,10,5 };
	assert(SumElements(third) == 35);
}

int main()
{
	Test();
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
	cout << endl;

	cout << SumElements(third);
	
	return 0;
}