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

const int mod = 109546051211;
#define i128 __int128


void solve() 
{
  int n; cin >> n;
  vector<int> fact(n + 9);
  fact[1] = 1;
  for (int i = 2; i <= n; i++) {
    fact[i] = (i128)fact[i - 1] * i % mod;
  }
  i128 ans = 1;
  for (int i = 1; i <= n; i++) {
    ans = (i128)ans * fact[i] % mod;
  }
  cout << (int)ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}