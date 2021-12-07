#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;
  vector<long long> values;
  values.reserve(n);
  for (int i = 0; i < n; i++) {
    int e;
    cin >> e;
    values.push_back(e);
  }
  vector<long long> new_values;
  new_values.push_back(0);
  std::partial_sum(values.cbegin(), values.cend(), std::back_inserter(new_values));
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << new_values[r - 1] - new_values[l - 1] << "\n";
  }
  cout.flush();
  return 0;
}
