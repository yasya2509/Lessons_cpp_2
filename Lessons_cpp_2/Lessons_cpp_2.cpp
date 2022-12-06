#include <iostream> 
using namespace std;

int main()
{
    const int size_1 = 2;
    const int size_2 = 2;
 
    int arr_first[size_1][size_2] = {
        {1,2},
        {2,9}
    };
    int arr_second[size_1][size_2] = {
        {9,8},
        {8,1}
    };

   

    for (int i = 0; i < size_1; ++i) {
        for (int j = 0; j < size_2; ++j) {

            arr_first[i][j] += arr_second[i][j];
            cout << arr_first[i][j] << ' ';
        }
        cout << endl;
    } 

	return 0;
}