#include<bits/stdc++.h>
using namespace std;

// O(nlogn)
int32_t main() {
  int n;
  cin >> n;
  vector<tuple<int, int, int, int, int>> vec;
  for (int i = 0; i < n; i++) {
    int x, y, z, u, v;
    cin >> x >> y >> z >> u >> v;
    vec.push_back({z, y, u, x, v});
  }
  sort(vec.begin(), vec.end());
  for (auto x: vec) {
    cout << get<3>(x) << ' ' << get<1>(x) << ' ' << get<0>(x) << ' ' << get<2>(x) << ' ' << get<4>(x) << '\n';
  }
  return 0;
}