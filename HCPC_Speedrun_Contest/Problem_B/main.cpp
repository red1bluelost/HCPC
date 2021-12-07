#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    string end;
    string b;
    cin >> n >> m;
    cin >> end;
    cin >> b;
    vector<char> out(b.size());

    vector<char> k_i(m);
    vector<int> b_i(m);
    vector<int> a_i(m);

    int jjj = n - 1;
    for (int i = m - 1; i >= 0; i--) {
        if(i + n + 1 > m) {
            out[i] = end[jjj--];
        } else {
            out[i] = k_i[i + n];
        }
        int n = (b[i] - out[i]);
        char ans;
        if (n < 0) {
            ans = ('z' + 1) + n;
        } else {
            ans = n + 'a';
        }
        k_i[i] = ans;
    }

    for (auto c : out) {
        cout << c;
    }

    return 0;
}
