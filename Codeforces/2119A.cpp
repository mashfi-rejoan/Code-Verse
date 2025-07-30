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
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int a, b, x, y; cin >> a >> b >> x >> y;

  if (a == b) {
    cout << 0 << nl;
    return;
  }

  if (a > b) {
    if (a % 2 != 0 and b == a - 1) {
      cout << y << nl;
    }
    else cout << -1 << nl;
    return;
  }

    int cost = 0;
    if (x <= y) {
      cost = (1LL * b - a) * x;
    }
    else {
      for (int i = a; i < b; i++) {
        if (i % 2 == 0) cost += y;
        else cost += x;
      }
    }
    cout << cost << nl;

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}