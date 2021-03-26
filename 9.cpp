#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int siz;
    cout<<"Dimension="<<endl;
    cin>>siz;
    vector<int> v(siz); // Довжина вектора


    for(int i = 0; i < v.size(); ++i) {
        int k=0;
        cin>>k;
        v[i] = k;
    }

    int sr=0;
    // Вивід елементів
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
        sr+=v[i];
    }
    cout << endl;
    cout<<"Average="<<float(sr/siz);
    int sr2=0;
    for(int i = 0; i < v.size(); ++i) {
        sr2+=pow(v[i]-float(sr/siz),2);
    }
    cout<<"Dispersion="<<float(sr2/(siz-1));
    return 0;
}
