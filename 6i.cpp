#include <iostream>
#include <string>
#include <vector>
using namespace std;

int str_to_int(string &s, int begin, int end){
    int val = 0;
    bool negative = 0;
    if(s[begin] == '+') begin++;
    else{
        if(s[begin] == '-'){
            negative = 1;
            begin++;
        }
    }
    for(auto i = begin; i < end; ++i){
        val *= 10;
        val += s[i] - 48;
    }
    if(val == 0 && s[begin] != '0') val++;
    if(negative == 1) val *= -1;
    return val;
}

string int_to_str(int val){
    string s, tmp;
    if(val > 0) s.push_back('+');
    else{
        val *= -1;
        s.push_back('-');
    }
    while(val > 0){
        tmp.push_back(val%10 + 48);
        val /= 10;
    }
    for(int i = tmp.size()-1; i >= 0; --i){
        s.push_back(tmp[i]);
    }
    return s;
}

void erase_the_plus(string &s){
    if(s[0] == '+') s.erase(s.begin());
}

void erase_the_one(string &s){
    if((s[1] == '1') && (s.size() == 2)) s.erase(s.begin()+1);
}

void analyze(string &s, vector <int> &v){
    if(s.find("x") == string::npos) v[0] += str_to_int(s, 0, s.size());
    else{
        if(s.find("^") == string::npos) v[1] += str_to_int(s, 0, s.find("x"));
        else{
            int power = str_to_int(s, s.find("^") + 1, s.size());
            v[power] += str_to_int(s, 0, s.find("x"));
        }
    }
}

vector <int> decompose(string &s){
    vector <int> v(11);
    string cur_s;
    int i = 0;
    while(i < s.size()){
        cur_s.clear();
        cur_s.push_back(s[i]);
        i++;
        while((s[i] != '+') && (s[i] != '-') && (i < s.size())){
            cur_s.push_back(s[i]);
            i++;
        }
        analyze(cur_s, v);
    }
    return v;
}

vector <int> multiplicate (vector <int> &a, vector <int> &b){
    vector <int> c(21);
    for(int i = 0; i < c.size(); ++i) c[i] = 0;
    for(int i = 0; i < a.size(); ++i){
        for(int j = 0; j < b.size(); ++j){
            c[i + j] += a[i] * b[j];
        }
    }
    return c;
}

string compose(vector <int> &v){
    string s;
    for(int i = v.size() - 1; i >= 2; --i){
        if(v[i] != 0){
            string coef = int_to_str(v[i]);
            erase_the_one(coef);
            s = s + coef;
            s.push_back('x');
            s.push_back('^');
            string power = int_to_str(i);
            erase_the_plus(power);
            s = s + power;
        }
    }
    if(v[1] != 0){
        string coef = int_to_str(v[1]);
        erase_the_one(coef);
        s = s + coef;
        s.push_back('x');
    }
    if(v[0] != 0){
        s = s + int_to_str(v[0]);
    }
    return s;
}

int main() {
    string a,b;
    vector <int> a_decomposed(11, 0);
    vector <int> b_decomposed(11, 0);
    getline(cin, a);
    getline(cin, b);
    a_decomposed = decompose(a);
    b_decomposed = decompose(b);
    vector <int> c_decomposed = multiplicate(a_decomposed, b_decomposed);
    string c = compose(c_decomposed);
    erase_the_plus(c);
    if(c.size() > 0) cout << c;
    else cout << 0;
    return 0;
}
