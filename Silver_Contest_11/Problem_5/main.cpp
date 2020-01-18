#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    bool rsp = true;
    if (a < 1) rsp = false;
    if (b < 1) rsp = false;
    if (c < 1) rsp = false;
    if (n > a + b + c) rsp = false;
    if (n < 3) rsp = false;
    if (rsp) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
