#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> values;
  values.reserve(n);
  std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_inserter(values));

  std::partial_sum(values.cbegin(), values.cend(), values.begin(),
                   [](int l, int r) { return (r + (l % 7)) % 7; });

  std::vector<int> first(7, std::numeric_limits<int>::max()), last(7);
  std::for_each(values.cbegin(), values.cend(),
                [i = 0, &first, &last](int v) mutable {
                  first[v] = std::min(first[v], i);
                  last[v] = std::max(last[v], i);
                  i++;
                });

  int ans = std::inner_product(first.cbegin(), first.cend(), last.cbegin(),
                               -1,
                               [](int rest, int e) { return std::max(rest, e); },
                               [](int l, int r) { return r - l; });

  std::cout << ans << std::endl;
  return 0;
}