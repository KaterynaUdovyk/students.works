#include <iostream>
using namespace std;


int main()
{

    int count_operation;
    cout << "Enter the number of numbers: ";
    cin >> count_operation;

    int min = 0;
    for (int i = 0; i < count_operation; i++)
    {
        int value;
        cin >> value;
        if (i == 0)
        {
            min = value;
        }
        if (min > value)
        {
            min = value;
        }
    }

    cout << "Min value: " << min << endl;
    return 0;
}

