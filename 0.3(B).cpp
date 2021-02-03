#include <iostream>

using namespace std;

float mn(float x)
{
    float y = x + 1;
    float z = 0;
    z = y * y;
    y = z * z * y;
    return y;
}


int main()
{
    float x, y;
    cin >> x;
    y = mn(x);
    cout << y << endl;
}

