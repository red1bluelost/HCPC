#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> seq;
//    for(int i = 0; i < 50000; ++i) {
//        seq.push_back(i);
//    }
//    seq.clear();
    int nnn;
    cin >> nnn;
    for (int i = 0; i < nnn; ++i) {
        int count = 0;
        int d, n;
        cin >> d >> n;
        int num;
        for(int j = 0; j < n; ++j) {
            cin >> num;
            seq.push_back(num);
        }
        for(int j = 1; j <= n; ++j) {
            for(auto it = seq.cbegin(); it + j <= seq.cend(); ++it) {
                int sum = 0;
                for_each(it, it + j, [&sum](int x){sum += x;});
                count += (sum % d == 0 ? 1 : 0);
            }
        }
        printf("%d\n", count);
        seq.clear();
    }
    return 0;
}
