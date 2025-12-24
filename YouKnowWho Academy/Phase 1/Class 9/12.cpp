#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long int
int bigmod(int x, int n, int mod) {
  x %= mod;
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    cout << bigmod(a, b, 10) << nl;
  }
  return 0;
}