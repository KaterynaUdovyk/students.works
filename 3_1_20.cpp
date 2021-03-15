#include <iostream>
#include <string>
using namespace std;


int main()
{
    string text;
    cout << "Enter string: ";
    getline(cin, text);

    cout << "Figures: ";
    for (int i = 0; i < text.size(); i++)
    {
        if ((int)text[i] >= 48 && (int)text[i] <= 57)
        {
            cout << text[i] << " ";
        }
    }
    cout << endl;
    cout << "Another symbols: ";
    for (int i = 0; i < text.size(); i++)
    {
        if ((int)text[i] == 32)
        {
            continue;
        }
        else if ((int)text[i] < 48 || (int)text[i] > 57)
        {
            cout << text[i] << " ";
        }
    }
    return 0;
}

