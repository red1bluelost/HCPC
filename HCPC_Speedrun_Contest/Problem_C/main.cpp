#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum situ {leftTurn, straight, rightTurn};

int num_for_dir(const string & s) {
    if (s == "North") return 1;
    else if (s == "South") return 3;
    else if (s == "East") return 0;
    else if (s == "West") return 2;
    else return -1;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int a_i = num_for_dir(a);
    int b_i = num_for_dir(b);
    int c_i = num_for_dir(c);

    situ situation;
    if(a_i - b_i == 1 || a_i - b_i == -3) {
        situation = leftTurn;
    } else if (abs(a_i - b_i) == 2) {
        situation = straight;
    } else {
        situation = rightTurn;
    }
    switch(situation) {
        case leftTurn:
            if((c_i - a_i) == -3 || (c_i - a_i) == 1 || abs(c_i - a_i) == 2) {
                cout << "Yes";
                return 0;
            } else {
                cout << "No";
                return 0;
            }

        case straight:
            if((c_i - a_i) == -3 || (c_i - a_i) == 1) {
                cout << "Yes";
                return 0;
            } else {
                cout << "No";
                return 0;
            }

        case rightTurn:
            cout << "No";
            return 0;
    }


    return 0;
}
