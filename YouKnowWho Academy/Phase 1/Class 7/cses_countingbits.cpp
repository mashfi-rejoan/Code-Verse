/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

int count_set_bits(int n) {
  if (n == 0) return 0;
  int x = __lg(n);
  int p = (1LL << (x - 1LL));
  int ones_upto_2px = x * p;
  int msb_2px_to_n = n - (1LL << x) + 1LL;
  int m = n - (1LL << x);
  int remaining = count_set_bits(m);
  return ones_upto_2px + msb_2px_to_n + remaining;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  cout << count_set_bits(n) << nl;

  return 0;
}