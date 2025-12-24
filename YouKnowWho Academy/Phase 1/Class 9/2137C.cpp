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
  int a, b; cin >> a >> b;
  if (a % 2 == 0 and b % 2 == 1) {
    cout << -1 << nl;
  }
  else if (b % 2 == 0) {
    int k = b / 2;
    b = 2;
    int ans = a * k + b;
    if (!(ans & 1)) cout << ans << nl;
    else cout << -1 << nl;
  }
  else {
    int k = b;
    b = 1;
    cout << (a * k) + b << nl;
  }
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