
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

void Sort(const vector<int>& elements, vector<int>& chet, vector<int>& no_chet) {
    for (size_t i = 0; i < elements.size(); ++i) {
        if (elements[i] % 2 == 0)
        {
            chet.push_back(elements[i]);
        }
        else
        {
            no_chet.push_back(elements[i]);
        }
       
    }
    
}

void Print(const vector<int>& elements) {
    for (size_t i = 0; i < elements.size(); ++i) {
        cout << elements[i] << endl;
    }
}

void Test() {
    vector<int> elements = { 12,5,8,65,3,23,7,599,5,2,35,35,6 };
    vector<int> chet;
    vector<int> no_chet;
    Sort(elements, chet, no_chet);
    assert(chet.size() == 4);
    assert(no_chet.size() == 9);
}

int main() {
    Test();
    vector<int> elements = { 12,5,8,65,3,23,7,599,5,2,35,35,6 };
    vector<int> chet;
    vector<int> no_chet;
    Sort(elements, chet, no_chet);
    Print(no_chet);
    return 0;
}