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



void solve() 
{
  int n, x; cin >> n >> x;
  int sum = 0, mx_gain = 0;;
  for (int i = 0; i < n; i++) {
    int a, b, c; cin >> a >> b >> c;
    sum += ((b - 1) * a);
    mx_gain = max(mx_gain, (a * b) - c);
  } 
  // trace(sum);
  // trace(mx_gain);
  int need = x - sum;
  if (need <= 0) cout << 0 << nl;
  else if (mx_gain <= 0) cout << -1 << nl;
  else {
    cout << CEIL(need, mx_gain) << nl;
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