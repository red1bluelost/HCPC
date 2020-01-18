#include <iostream>
#include <cstring>
using namespace std;

void rot (char[], int r);

int main() {
    int rotate;
    char string[40];
    while(cin >> rotate >> string) {
        rot(string, rotate);
    }

    return 0;
}

void rot(char c[], int r) {
    for(int i = 0; i < strlen(c); ++i) {

        c[i] += r;
    }
    cout << c << endl;

}