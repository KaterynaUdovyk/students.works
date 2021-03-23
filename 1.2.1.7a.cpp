#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int x;
    int x1 = -99;
    int x2 = -99;
    for (int i = 3; ; i++)
    {
        x = x1 + x2 + 100;
        if (x>0)
        {
            std::cout << i<<"\n";
            break;
        }
        x2 = x1;
        x1 = x;
    }
    return 0;
}
