#include <iostream>
#include <string>
using namespace std;

string multString(string s, string o, int n) {
    s += o;
    return n == 0 ? s : multString(s, o, n-1);
}

int main() {
    int n;
    cin >> n;
    string str;
    for(int i = 0; i <= n; ++i) {
        getline(cin, str);
        for(int j = 1; j <= (int)str.length(); ++j) {
            int repeat = (int)str.length() / j;
            string scheck = str.substr(0, j);
            scheck = multString(scheck, scheck, repeat);
            scheck = scheck.substr(0, str.length());
            if (scheck.compare(str) == 0) {
                cout << j << endl;
                break;
            }
            if (j == (int)str.length()) {
                cout << j << endl;
            }
        }
    }
    return 0;
}
