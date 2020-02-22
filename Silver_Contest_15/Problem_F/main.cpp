#include <iostream>
#include <cmath>
using namespace std;

struct position {
    float x, y;
    bool closeEnough();
};

bool position::closeEnough() {
    return sqrt(x*x + y*y) <= 8;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        position book;
        cin >> book.x >> book.y;
        int nn;
        cin >> nn;
        bool h = false;
        for (int j = 0; j <= nn; ++j) {
            position pos;
            if (j < nn) {
                cin >> pos.x >> pos.y;
            }
            position dist = {pos.x - book.x, pos.y - book.y};
            if (dist.closeEnough() && !h && j != nn) {
                h = true;
                cout << "light a candle" << endl;
            } else if (j == nn && !h) {
                cout << "curse the darkness" << endl;
            }
        }
    }
    return 0;
}
