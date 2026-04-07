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
  string s, t; cin >> s >> t;

  map<char, int> mps, mpt;
  for (auto &u : s) mps[u]++;
  for (auto &u : t) mpt[u]++;
  for (auto [k, v] : mps) {
    if (v > mpt[k]) {
      cout << "Impossible\n";
      return;
    }
  }

  multiset<char> ms;
  for (auto &u : t) ms.insert(u);
  // print(ms);
  for (auto &u : s) {
    if (!ms.empty() and ms.find(u) != ms.end()) {
      ms.erase(ms.find(u));
    }
  }
  string temp = "";
  for (auto &u : ms) {
    temp += u;
  }
  // trace(temp);
  int i = 0, j = 0;
  string ans = "";
  while (i < sz(s) and j < sz(temp)) {
    if (s[i] <= temp[j]) {
      ans += s[i];
      i++;
    }
    else {
      ans += temp[j];
      j++;
    }
  }
  // trace(i); trace(j);
  while (i < sz(s)) {
    ans += s[i];
    i++;
  }
  while (j < sz(temp)) {
    ans += temp[j];
    j++;
  }
  cout << ans << nl;


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