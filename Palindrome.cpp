#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string str;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            str += s[i] + 32;
        } else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i<='9'])){
            str += s[i];
        }
    }
    int p=0;
    int q=str.size()-1;
    while (p < q) {
        if (str[p] != str[q]) {
            cout << "No" << "\n";
            return 0;            
        }
        p++;
        q--;
    }
    cout << "Yes";
    return 0;
}
