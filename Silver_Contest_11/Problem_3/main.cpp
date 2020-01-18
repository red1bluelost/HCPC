#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double radius;
    cin >> radius;
    cout << setprecision(10);
    double uArea = M_PI * radius * radius;
    cout << uArea << endl;
    double tArea = 2 * radius * radius;
    cout << tArea;


    return 0;
}
