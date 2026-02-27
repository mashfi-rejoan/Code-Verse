/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define pb push_back


void solve() 
{
  int n, d; cin >> n >> d;
  vector<int> v;
  v.pb(1);
  if (d % 3 == 0 or n >= 3) v.pb(3);
  if (d % 5 == 0) v.pb(5);
  if (d % 7 == 0 or n >= 3) v.pb(7);
  if (d % 9 == 0 or n >= 6 or (n >= 3 and d % 3 == 0)) v.pb(9);
  print(v);
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