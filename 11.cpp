#include <strstream>
#include <iostream>
#include <cstring>
int main()
{
    char txt[]="abbbbbba fger 1qwerty1.";
    std::istrstream is(txt);
    bool finish=false;
    do
    {
        char wrd[32];
        is>>wrd;
        int L=strlen(wrd);
        if(wrd[L-1]=='.')
        {
            finish=true;
            L--;
            wrd[L]=0;
        }
        if(wrd[L-1]==wrd[0])
            std::cout<<wrd<<' ';
    }
    while (!finish && !is.eof());
    return 0;
}
