/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 

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
  int n, k; cin >> n >> k;
  double x = k * log10(n);
  int p = floor(x);
  double q = x - floor(x);
  double mash = pow(10, q);
  string s = to_string(mash);
  int i = 0, cnt = 0;
  while (true) {
    if (s[i] != '.') {
      cout << s[i];
      cnt++;
      if (cnt == 3) break;
    }
    i++;
  }
  cout << "...";
  int nai = bigmod(n, k, 1000);
  string str_nai = to_string(nai);
  int tata = 3 - (int)str_nai.size();
  while (tata--) {
    cout << 0;
  }
  cout << nai;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) {
    solve();
    cout << nl;
  }

  return 0;
}