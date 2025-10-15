#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << (1ll * n * (n + 2) * (2 * n + 1)) / 8 << '\n';
  }
  return 0;
}