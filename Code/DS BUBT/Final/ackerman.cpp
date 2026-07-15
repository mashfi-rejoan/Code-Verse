#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int

int ackerman (int m, int n) {
  if (m == 0) return n + 1;
  else if (m > 0 and n == 0) return ackerman(m - 1, 1);
  else if (m > 0 and n > 0) return ackerman(m - 1, ackerman(m , n - 1));
  else return -1;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n; cin >> m >> n;
  int ans = ackerman(m, n);
  cout << ans << nl;

  return 0;
}