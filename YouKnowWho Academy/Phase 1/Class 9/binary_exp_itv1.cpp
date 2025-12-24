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

const int mod = 1e9 + 7;

// binary exponentiaton iterative
int power(int x, int n, int mod) {
  vector<int> pw2(61, 0);
  pw2[0] = x % mod;
  for (int k = 1; k <= 60; k++) {
    pw2[k] = 1LL * pw2[k - 1] * pw2[k - 1] % mod;
  } 
  int ans = 1 % mod;
  for (int k = 0; k <= 60; k++) {
    if (n >> k & 1) {
      ans = 1LL * ans * pw2[k] % mod;
    }
  }
  return ans;
}

void solve() 
{
  int a, b; cin >> a >> b;
  cout << power(a, b, mod) << nl;
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