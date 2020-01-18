#include <iostream>
using namespace std;

int main() {
    string drink;
    int num;
    cin >> num >> drink;
    for (int i = num; i > 1; --i) {
        if (i == 2) {
            cout << i << " bottles of " << drink << " on the wall, " << i << " bottles of " << drink << ".\n";
            cout << "Take one down, pass it around, " << i - 1 << " bottle of " << drink << " on the wall.\n\n";
        } else {
            cout << i << " bottles of " << drink << " on the wall, " << i << " bottles of " << drink << ".\n";
            cout << "Take one down, pass it around, " << i - 1 << " bottles of " << drink << " on the wall.\n\n";
        }
    }
    cout << "1 bottle of " << drink << " on the wall, " << "1 bottle of " << drink << ".\n";
    cout << "Take it down, pass it around, no more bottles of " << drink << ".";
    return 0;
}
