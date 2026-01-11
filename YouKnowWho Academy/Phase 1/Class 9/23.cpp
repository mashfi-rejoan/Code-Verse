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

const int mod = 1e9;

void solve() 
{
  int n, m;
  while (cin >> n >> m) {
    int x = 1;
    for (int i = n; i >= n - m + 1; i--) {
      x *= i;
      while (x > 0 and x % 10 == 0) x /= 10;
      x %= mod;
    }
    cout << x % 10 << nl;
  }
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