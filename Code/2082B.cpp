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

int N = 1e9;
int M = log2(N);

void solve() 
{
  M++;
  int x, n, m; cin >> x >> n >> m;
  if (n >= N) n = M;
  if (m >= N) m = M;
  int mx = x, mn = x, a = n, b = m;
  while(mx > 0 and n > 0 and m > 0) {
    // trace(mx); trace(n); trace(m);
    if (mx & 1) {
      mx = ceil((double)mx / 2);
      m--;
    }
    else {
      mx /= 2;
      n--;
    }
  }
  while(mx > 0 and m > 0) {
    mx = ceil((double)mx / 2);
    m--;
  }
  while(mx > 0 and n > 0) {
    mx /= 2;
    n--;
  }
  while(mn > 0 and a > 0 and b > 0) {
    if (!(mn & 1)) {
      mn = ceil((double)mn / 2);
      b--;
    }
    else {
      mn /= 2;
      a--;
    }
  }
  while(mn > 0 and b > 0) {
    mn = ceil((double)mn / 2);
    b--;
  }
  while(mn > 0 and a > 0) {
    mn /= 2;
    a--;
  }
  cout << mn << ' ' << mx << nl;
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