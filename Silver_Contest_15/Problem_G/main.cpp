#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> sa;
    string str;
    while(cin >> str) {
        sa.push_back(str);
        while(cin >> str) {
            if(str.compare("") == 0) {
                break;
            }
            sa.push_back(str);
        }
    }

    return 0;
}
