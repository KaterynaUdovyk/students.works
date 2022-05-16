#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    double a = 2, b = 5, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "a "<< i << " = " << a << endl;
        cout << "b " << i << " = " << b << endl;
        sum += pow(a / b, i);

        double temp = a;
        a = b + ((b * b - a) / a);
        b = b * b - temp;
    }

    cout << "Sum = " << sum;

    return 0;
}
