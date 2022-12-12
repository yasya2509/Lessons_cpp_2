#include <iostream> 
using namespace std;

int** CreateArr(int str, int stolb)
{
    int** arr = new int* [str];
    for (int i = 0; i < str; ++i)
    {
        arr[i] = new int[stolb];
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

int** SumArr(int str, int stolb, int** dinamic_arr_first, int** dinamic_arr_second)
{
    int** arr = CreateArr(str, stolb);
    for (int i = 0; i < str; ++i)
    {
        for (int j = 0; j < stolb; ++j)
        {
            arr[i][j] = dinamic_arr_first[i][j] + dinamic_arr_second[i][j];
            
        }
    }
    return arr;
}

void DelArr(int** arr, int str, int stolb)
{
    for (int i = 0; i < str; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
}

int main()
{
    // посмотри внимательнее на переменные ниже
    const int str = 2;
    const int stolb = 4;
    //const int size_1 = 2;
    
    int arr_first[str][stolb] = {
        {1,2,3,5},
        {2,9,6,7}

    };
    int arr_second[str][stolb] = {
        {9,8,7,5},
        {8,1,4,3}
    };
    

    // Это делается для того, чтобы передать матрицу в функцию
    int** dinamic_arr_first = CreateArr(str, stolb);
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < stolb; ++j) {
            dinamic_arr_first[i][j] = arr_first[i][j];
        }
    }
    int** dinamic_arr_second = CreateArr(str, stolb);
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < stolb; ++j) {
            dinamic_arr_second[i][j] = arr_second[i][j];
        }
    }

    // и вот тут подумай какие из переменных тебе не нужно передавать
    int** sum = SumArr(str, stolb, dinamic_arr_first, dinamic_arr_second);
    Print(sum, str, stolb);
    DelArr(sum, str, stolb);

    DelArr(dinamic_arr_first, str, stolb);
    DelArr(dinamic_arr_second, str, stolb);

    return 0;
}  