#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double accuracyLimit = 0;
    cout << "Enter the specified accuracy e(e>0): ";
    cin >> accuracyLimit;

    if (accuracyLimit <= 0)
    {
        while (true)
        {
            cout << "Repeat the entry: ";
            cin >> accuracyLimit;
            if (accuracyLimit > 0)
            {
                break;
            }
        }
    }

    double x;
    cout << "Enter x: ";
    cin >> x;

    double sum = 0, item = 0, k = 0;
    int start_k = k;

    while (true)
    {
        double numerator = pow(-1, k) * pow(x, k);

        long long fact_numerator = 1;
        for (int i = 1; i <= 2 * k; i++)
        {
            fact_numerator *= i;
        }

        numerator *= fact_numerator;

        double denominator = 1 - 2 * k;

        long long fact_denominator = 1;
        for (int i = 1; i <= k; i++)
        {
            fact_denominator *= i;
        }
        denominator *= pow(fact_denominator, 2) * pow(4, k);

        item = numerator / denominator;

        if (abs(item) < accuracyLimit)
        {
            if (start_k == k)
            {
                k = 0;
            }
            break;
        }

        cout << "k = " << k << " , result = " << item << " (" << numerator << "/" << denominator << ")" << endl;

        sum += item;
        ++k;

    }

    cout << "Number of counted terms = " << k << endl;
    cout << "Sum = " << sum << endl;
}

