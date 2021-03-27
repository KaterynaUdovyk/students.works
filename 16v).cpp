#include <iostream>
#include <string>
using namespace std;
const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

string ary[DIM1][DIM2];

int main()
{
    setlocale(LC_ALL, "Russian");
    ary[0][0]="Призвище1";
    ary[0][1]="1 группа";
    ary[0][2]="5";
    ary[0][3]="5";
    ary[0][4]="5";



    ary[1][0]="Призвище2";
    ary[1][1]="1 группа";
    ary[1][2]="3";
    ary[1][3]="5";
    ary[1][4]="4";

    cout << "Array1: " << endl;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout << ary[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < DIM1; i++) {
        if(stoi(ary[i][2])>3&&stoi(ary[i][3])&&stoi(ary[i][4]))
        {
            cout<<ary[i][0];
        }
        cout << endl;
    }
    return 0;

}
