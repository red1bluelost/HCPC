#include <iostream>
using namespace std;

int main() {
    int loop_num;
    cin >> loop_num;
    int temps[50];
    for(int i = 0; i < loop_num; i++) {
        cin >> temps[i];
    }
    int  lownum;
    int maxOfTwo[loop_num-2];
    for(int i = 0; i < loop_num-2; i++) {
        if (temps[i]>temps[i+2]) {
            maxOfTwo[i] = temps[i];
        } else {
            maxOfTwo[i] = temps[i+2];
        }

    }
    int lowt = 80;
    for(int i = 0; i < (loop_num-2); i++) {
        if (lowt > maxOfTwo[i]) {
            lowt = maxOfTwo[i];
            lownum = i;
        }
    }

    cout << lownum + 1 << " " << maxOfTwo[lownum];


    return 0;
}
