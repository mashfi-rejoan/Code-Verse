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


void solve() 
{
  int n, m; cin >> n >> m;
  // for (int i = 1; i <= 29; i++) {
  //   cout << (1LL << i) << nl;
  // }
  if (n > 29) n = 536870912;
  else {
    n--;
    n = (1 << n) + (1 << n);
  }
  // trace(n);
  cout << (m % n) << nl;
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