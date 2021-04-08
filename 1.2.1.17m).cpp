#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    do
    {
        cout << "x = ";
        cin >> x;
    } while (abs(x)>1);

    double eps = 0.0001, a = 1.0, b = 1.0, temp = 0.1, sum = 0;
    int i = 0;
    while (abs(temp) > eps)
    {
        if (i != 0 && i % 2 == 1) a *= 2 * i - 1;
        if (i != 0) b *= 2 * i;
        if (i != 0) temp = pow(-1, i) * pow(x, i) * a / b;
        else temp = pow(x, i) * a / b;
        sum += temp;
        i++;
    }
    cout << "res = " << sum;
}
