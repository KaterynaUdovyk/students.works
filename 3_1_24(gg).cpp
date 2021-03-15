#include <iostream>
#include <string>
using namespace std;


int main()
{
    string text;
    cout << "Enter string: ";
    getline(cin, text);

    int counter = 0;
    string find_word;
    for (int i = 0; i < text.size(); i++)
    {
        if ((int)text[i] != 32)
        {
            find_word += text[i];
        }

        if ((int)text[i] == 32 || i == text.size() - 1)
        {
            if (find_word.size() >= 1)
            {
                counter += find_word[0] == find_word[find_word.size() - 1];
                find_word = "";
            }
        }
    }
    cout << "Count of word: " << counter << endl;

    return 0;
}