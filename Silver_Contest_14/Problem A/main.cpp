#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int input[3];
    int n = sizeof(input)/sizeof(input[0]);

    for (int & i : input) {
        int j;
        cin >> j;
        i = j;
    }
    sort(input, input+n);

    int firstDif = input[1] - input[0];
    int secondDif = input[2] - input[1];
    int keepDif = firstDif < secondDif ? firstDif : secondDif;

    if(firstDif < secondDif) {
        cout << input[1] + keepDif;
    } else if (secondDif == firstDif){
        cout << input[2] + keepDif;
    } else {
        cout << input[0] + keepDif;
    }

    return 0;
}
