#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    n--;
    vector<int> kids;
    for(int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        kids.push_back(input);
    }
    cout << 1 << " ";
    for(int i = 0; i < n; ++i) {
        int j = kids.at(kids.at(i)) + 2;
        cout << j << " ";
    }
    return 0;
}
