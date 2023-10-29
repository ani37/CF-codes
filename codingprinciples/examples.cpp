// Time complexity O(nlogn) because of map
#include <bits/stdc++.h>

const int MX = 100 + 5;

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::map<int ,int> occ;
    for (int i = 1; i <= n; ++i) {
      int x;
      std::cin >> x;
      occ[x]++;
    }
    if (occ.size() >= 3) puts("No");
    else {
      if (std::abs(occ.begin()->second - occ.rbegin()->second) <= 1) {
        puts("Yes");
      } else {
        puts("No");
      }
    }
  }
  return 0;
}