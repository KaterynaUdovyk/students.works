#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main_file() {
    string text;
    ifstream myReadFile("C:\\Users\\Admin\\CLionProjects\\hw17\\filename4.txt");
    ofstream myWriteFile("C:\\Users\\Admin\\CLionProjects\\hw17\\filename4_output.txt");
    while(!myReadFile.eof())
    {
        getline(myReadFile,text);
        myWriteFile << text << endl;
    }
    {
        getline(myReadFile,text);
        if(text.length() > 60) {
            myWriteFile << text << endl;
        }
    }
    myReadFile.close();
    myWriteFile.close();
}
