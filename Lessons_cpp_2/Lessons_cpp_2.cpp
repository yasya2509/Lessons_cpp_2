/**

***/
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

void Sort(const vector<int>& elements, vector<int>& chet, vector<int>& no_chet) {
    // одним циклом разделяет четные и нечетные по разным векторам
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


    return 0;
}