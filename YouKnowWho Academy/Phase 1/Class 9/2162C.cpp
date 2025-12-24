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
  if (__lg(a) < __lg(b)) {
    cout << -1 << nl;
    return;
  }
  if (a == b) {
    cout << 0 << nl;
    return;
  }
  int msb_B = __lg(b);
  int x = 0;
  for (int k = 0; k <= msb_B; k++) {
    if (((a >> k) & 1) ^ ((b >> k) & 1)) {
      x += (1 << k);
    }
  }
  a ^= x;
  int y = 0;
  for (int k = msb_B + 1; k <= __lg(a); k++) {
    if ((a >> k) & 1) y += (1 << k);
  }
  cout << 2 << nl;
  cout << x << ' ' << y << nl;

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