#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> x_i;
    x_i.reserve(n);
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        x_i.push_back(temp);
    }

    vector<int> layer(h + 1, 0);
    int idx = 0;
    for(auto i : x_i) {
        layer[idx] += i;
        if (idx >= h) {
            cout << "YES";
            return 0;
        } else if(layer[idx] > w) {
            cout << "NO";
            return 0;
        }
        if (layer[idx] == w) {
            idx++;
        }
    }
    if (idx >= h) {
        cout << "YES";
        return 0;
    } else if(layer[idx] > w) {
        cout << "NO";
        return 0;
    }

    return 0;
}
