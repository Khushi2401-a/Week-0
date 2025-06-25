#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin,s);
string str;

    for (int i = 0; i < s.size(); i++) {
        int j = 0;
        while (j < str.size()) {
            if (str[j] == s[i]) {
                break;
            }
            j++;
        }
        if (j == str.size()) {
            str += s[i];
        }
    }

    cout << str;
    return 0;
}