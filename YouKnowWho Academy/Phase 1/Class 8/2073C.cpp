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
  int n; cin >> n;
  if (n <= 4) {
    cout << -1 << nl;
    return;
  }
  int i = 1;
  while (i <= n) {
    if (i % 2 != 0 and i != 5) {
      cout << i << ' ';
    }
    i++;
  }
  cout << 5 << ' ' << 4 << ' ';
  int j = 2;
  while (j <= n ) {
    if (j % 2 == 0 and j != 4)
    cout << j << ' ';
    j++;
  }
  cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}