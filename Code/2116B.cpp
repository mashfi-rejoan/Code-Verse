/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;

const int mod = 998244353;
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

void solve() 
{
  int n; cin >> n;
  vecin(p, n);
  vecin(q, n);
  vector<int> p_max(n), q_max(n), ans(n);
  p_max[0] = p[0];
  for (int i = 1; i < n; i++) {
    p_max[i] = max(p_max[i - 1], p[i]);
  }
  // print(p_max);
  q_max[0] = q[0];
  for (int i = 1; i < n; i++) {
    q_max[i] = max(q_max[i - 1], q[i]);
  }
  // print(q_max);
  map<int, int> mp, mq;
  for (int i = 0; i < n; i++) {
    mp[p[i]] = i;
    mq[q[i]] = i;
  }

  for (int i = 0; i < n; i++) {
    int pw1 = -1, pw2 = -1;
    if (p_max[i] == q_max[i]) {
      int a = q[i - mp[p_max[i]]];
      int b = p[i - mq[q_max[i]]];
      // trace(a); trace(b);
      pw1 = p_max[i];
      pw2 = max(a, b);
      ans[i] = (bigmod(2, pw1, mod) + bigmod(2, pw2, mod)) % mod;
      continue;
    }
    if (p_max[i] > q_max[i]) {
      pw1 = p_max[i];
      pw2 = q[i - mp[p_max[i]]];
    }
    else {
      pw1 = q_max[i];
      pw2 = p[i - mq[q_max[i]]];
    }

    ans[i] = (bigmod(2, pw1, mod) + bigmod(2, pw2, mod)) % mod;
    
  }
  print(ans);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}