#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    cout << "x:\n";
    std::string xs;
    cin >> xs;
    double x = atof(xs.c_str());
    cout << "\ny:\n";
    std::string xy;
    cin >> xy;
    double y = atof(xy.c_str());
    cout << "\nz:\n";
    std::string xz;
    cin >> xz;
    double z = atof(xz.c_str());
    cout << "\nR:\n";
    std::string xR;
    cin >> xR;
    double R = atof(xR.c_str());
    cout << "\nx:" << x << " y:" << y << " z:" << z << " R:" << R << endl;
    if (x * x + y * y + z * z <= R * R) {
        cout << "\nТочка належить кулi\n";
    }
    else {
        cout << "\nТочка не належить кулi\n";
    }
    return 0;
}