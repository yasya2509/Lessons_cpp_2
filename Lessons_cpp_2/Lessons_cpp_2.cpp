#include <iostream>

using namespace std;

int** FillTArr(int str, int stolb)
{
    int** arr = new int* [str];
    for (int i = 0; i < str; ++i)
    {
        arr[i] = new int[stolb];
    }
    for (int i = 0; i < str; ++i)
    {
        for (int j = 0; j < stolb; ++j)
        {
            arr[i][j] = 0;
        }
    }
    return arr;
 }

void Print(int** arr, int str, int stolb)
{
    for (int i = 0; i < str; ++i) 
    {
        for (int j = 0; j < stolb; ++j)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void DelArr(int** arr, int str, int stolb)
{
    for (int i = 0; i < str; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int str = 5;
    int stolb = 7;
    int** arr = FillTArr(str, stolb);
    Print(arr, str, stolb);
    DelArr(arr, str, stolb);

    return 0;
}