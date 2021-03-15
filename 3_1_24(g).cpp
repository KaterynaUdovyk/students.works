#include <iostream>
#include <string>
using namespace std;


int main()
{
    string text;
    cout << "Enter string: ";
    getline(cin, text);

    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;

    int counter = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (i == 0 && text[i] == symbol)
        {
            counter++;
        }
        else if (text[i] == symbol && text[i - 1] == ' ')
        {
            counter++;
        }
    }
    cout << "Count of word: " << counter << endl;

    return 0;
}
