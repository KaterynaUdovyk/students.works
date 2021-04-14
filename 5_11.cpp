#include <iostream>
#include <fstream>
#include <string>
//#include <algorithm>
using namespace std;

string Change_Word(string& word)
{
    string new_word;

    for (int i = 0; i < word.size(); i++)
    {
        if (((int)word[i] >= 65 && (int)word[i] <= 90) || ((int)word[i] >= 97 && (int)word[i] <= 122))
        {
            new_word += word[i];
        }
    }
    return new_word;
}

int main()
{
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    char up_symbol = toupper(symbol), low_symbol = tolower(symbol);

    string word;
    ifstream fin("text.txt"); //треба самому створити цей файл
    ofstream fout("answer.txt");
    while (fin >> word)
    {
        word = Change_Word(word);
        if (up_symbol == word[0] || low_symbol == word[0])
        {
            fout << word << " ";
        }
    }
    cout << "Result is in the file" << endl;
}