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
  int n, k; cin >> n >> k;
  multiset<int> ms1, ms2;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ms1.insert(x % k);
  }
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ms2.insert(x % k);
  }
  vector<int> v;
  for (auto &u : ms1) {
    if (ms2.find(u) != ms2.end()) {
      ms2.erase(ms2.find(u));
      v.pb(u);
    }
  }
  for (auto &u : v) {
    ms1.erase(ms1.find(u));
  }
  v.clear();
  for (auto &u : ms1) {
    if (ms2.find(u + k) != ms2.end()) {
      ms2.erase(ms2.find(u + k));
      v.pb(u);
    }
    else if (ms2.find(abs(u - k)) != ms2.end()) {
      ms2.erase(ms2.find(abs(u - k)));
      v.pb(u);
    }
  }
  for (auto &u : v) {
    ms1.erase(ms1.find(u));
  }
  if (sz(ms1)) no;
  else yes;
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