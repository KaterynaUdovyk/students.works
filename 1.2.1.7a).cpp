#include <iostream>
#include <math.h>

using namespace std;
int rek(int n)
{
    int x1 = -99, x2 = -99;
    int xn = 0;
    if (n == 1 or n == 2)
    {
        return x1;
    }
    else
    {
        for (int i = 3; i <= n;i++)
        {
            xn = x1 + x2 + 100;
            x1 = x2;
            x2 = xn;
        }
    }
    return xn;
}
int main()
{
    int n;
    cin >> n;
    cout << rek(n);
}
