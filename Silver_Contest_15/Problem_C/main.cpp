#include <iostream>
using namespace std;

float expectation(int a, int b) {
    int sum = 0;
    float die_range = b - a + 1;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum/die_range;
}

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    float Gunnar = expectation(a1, b1) + expectation(a2, b2);
    cin >> a1 >> b1 >> a2 >> b2;
    float Emma = expectation(a1, b1) + expectation(a2, b2);

    cout << (Gunnar == Emma ? "Tie" : (Gunnar > Emma ? "Gunnar" : "Emma"));
    return 0;
}

