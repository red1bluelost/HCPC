#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r, n;
    cin >> r >> n;
    vector<int> bad;
    bad.reserve(n);
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        bad.push_back(temp);
    }
    vector<int> v;
    v.reserve(r);

    for (int i = 1; i <= r; i++) {
        if(bad.end() == find(bad.begin(), bad.end(), i)) {
            v.push_back(i);
        } else {
            v.push_back(-1);
        }
    }

    for(auto i : v) {
        if(i != -1) {
            cout << i;
            return 0;
        }
    }
    cout << "too late";

    return 0;
}
