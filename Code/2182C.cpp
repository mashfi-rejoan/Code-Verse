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
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  for (auto &u : a) cin >> u;
  for (auto &u : b) cin >> u;
  for (auto &u : c) cin >> u;

  int ab = 0, bc = 0;
  for (int i = 0; i < n; i++) {
    bool isOk = true;
    for (int j = 0; j < n; j++) {
      if (a[j] < b[(i + j) % n]) continue;
      else {
        isOk = false;
        break;
      }
    }
    if (isOk) ab++;
  }
  for (int i = 0; i < n; i++) {
    bool isOk = true;
    for (int j = 0; j < n; j++) {
      if (b[j] < c[(i + j) % n]) continue;
      else {
        isOk = false;
        break;
      }
    }
    if (isOk) bc++;
  }
  cout << n * ab * bc << nl;
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