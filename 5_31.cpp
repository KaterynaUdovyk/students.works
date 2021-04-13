#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const int count_dot = 3;
    fstream fin("data.txt");  //треба самому створити цей файл
    double** dots;
    int size;
    fin >> size;
    dots = new double* [size];
    for (int i = 0; i < size; i++)
    {
        dots[i] = new double[count_dot];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < count_dot; j++)
        {
            fin >> dots[i][j];
        }
    }

    double max_length = 0;
    double* dots_x = new double[count_dot];
    double* dots_y = new double[count_dot];

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            double temp = sqrt(pow(dots[i][0] - dots[j][0],2)
                               + pow(dots[i][1] - dots[j][1],2)
                               + pow(dots[i][2] - dots[j][2],2));

            if (max_length < temp)
            {
                for (int k = 0; k < count_dot; k++)
                {
                    dots_x[k] = dots[i][k];
                    dots_y[k] = dots[j][k];
                }
                max_length = temp;
            }
        }
    }

    cout << "Dots_x: ";
    for (int i = 0; i < count_dot; i++)
    {
        cout << dots_x[i] << " ";
    }
    cout << endl;
    cout << "Dots_y: ";
    for (int i = 0; i < count_dot; i++)
    {
        cout << dots_y[i] << " ";
    }
    cout << endl;
    cout << "The longest segment = " << max_length;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        delete[] dots[i];
    }

    delete[] dots;
    delete[]dots_x;
    delete[]dots_y;

}