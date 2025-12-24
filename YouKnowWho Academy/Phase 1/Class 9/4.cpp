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

const int N = 1e5 + 9;
const int mod = 998244353;

void solve() 
{
  int n; cin >> n;
  vector<int> v(N);
  v[0] = 1;
  v[1] = 1;
  for (int i = 2; i < n; i++) {
    v[i] = (v[i - 1] + v[i - 2]) % mod;
  }
  cout << v[n - 1] << nl;
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