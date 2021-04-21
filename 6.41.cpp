#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;
    string longestText;
    unsigned maxLength = 0;
    ifstream myReadFile("C:\\Users\\Admin\\CLionProjects\\hw17\\filename4.txt");
    while(!myReadFile.eof())
    {
        getline(myReadFile,text);
        if(text.length() > maxLength) {
            maxLength = text.length();
            longestText = text;
        }
    }
    myReadFile.close();
    ofstream myWriteFile("C:\\Users\\Admin\\CLionProjects\\hw17\\filename4_output.txt");
    myWriteFile << longestText;
    myWriteFile.close();
}