#include <iostream> 
#include <cassert> 
#include <vector>
using namespace std;

int main()
{
	vector<int> first(5, 5);
	vector<int> second(5, 5);
	vector<int> third(5);
	for (int i = 0; i < first.size(); i++) {
		third[i] = first[i] + second[i];
		cout << third[i] << endl;
	}
	third.push_back(1);
	cout << third.size() << endl;
	return 0;
}