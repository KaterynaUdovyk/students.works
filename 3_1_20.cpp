//newversion3_1_20
#include <iostream>
#include <sstream>
using namespace std;

void extractIntegerWords(string str)
{
    string integers;
    string other;
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == true){
            integers += str[i];
            other += ' ';
        }else{
            other += str[i];
            integers += ' ';
        }
    cout<<"Integers " <<integers;
    cout<<"\nSymbols  "<<other;
}

int main()
{
    string str = "sorted 237843 num5b3ers";
    extractIntegerWords(str);
    return 0;
}
