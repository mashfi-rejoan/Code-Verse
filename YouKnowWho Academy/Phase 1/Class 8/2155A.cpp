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
  int w = n, l = 0;
  int cnt = 0;
  while (w >= 2) {
    cnt += (w / 2);
    int x = (int)w / 2;
    l += x;
    x += (w % 2);
    w = x;
    // trace(w);
    // trace(l);
  }
  while (l >= 2) {
    // trace(l);
    cnt += (l / 2);
    int k = l;
    l /= (int)2;
    l += (k % 2);
  }
  cnt++;
  cout << cnt << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}