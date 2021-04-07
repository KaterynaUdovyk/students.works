#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> ss;
    string s;
    string str = "yf.ikfvkgdgdf.gddas";
    for (int i = 0;i<str.size();i++)
        if(str[i]=='.')
        {
            int a= str.find(".");
            int b= str.find(".",a+1);

            s= str.substr(a+1,b-a-1);
        }
    ss.push_back(s);
    for (int q = 0;q<ss.size();q++)
    {
        cout<<ss[q];
    }
}