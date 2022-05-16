#include <iostream>
using namespace std;


int main()
{
    int count_operation;
    cout << "Enter the number of numbers: ";
    cin >> count_operation;

    int min = 0, min_in_2 = 0;
    for (int i = 0; i < count_operation; i++)
    {
        int value, value_in_2;
        cin >> value;
        if (i == 0)
        {
            min = value;
            min_in_2 = value * value;
        }
        if (min > value)
        {
            min = value;
        }
        if (min_in_2 > value * value)
        {
            min_in_2 = value * value;
        }
    }

    cout << "Min value: " << min << endl;
    cout << "Minimum value squared: " << min_in_2 << endl;
    cout << "Difference: " << min - min_in_2 << endl;
    return 0;
}


