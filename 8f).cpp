#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int m, n;
    int k=5;
    int mi=2;
    m = 3 + (rand() % 4);
    n = 4 + (rand() % 4);
    float ** arr = new float*[m]; // создание динамического двумерного массива на m строк
    for (int i(0); i < m; i++) // создание каждого одномерного массива в динамическом двумерном массиве, или иначе - создание столбцов размерность n
        arr[i] = new float[n];


    //заполнение массива от -10 до 10
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    //вывод чисел
    cout << "Array1: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    m=m+k;

    float ** arr1 = new float*[m]; // создание динамического двумерного массива на m строк
    for (int i(0); i < m; i++) // создание каждого одномерного массива в динамическом двумерном массиве, или иначе - создание столбцов размерность n
        arr1[i] = new float[n];
    //заполнение массива от -10 до 10
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i<mi)
            {
                arr1[i][j] = arr[i][j];

            }
            else
            {
                if(i>=mi&&i<mi+k)
                {
                    arr1[i][j]=rand() % 21 - 10;

                }
                else
                {
                    arr1[i][j]=arr[i-k][j];

                }
            }

        }
    }

    //вывод чисел
    cout << "Array2: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

