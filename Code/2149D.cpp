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
  string s; cin >> s;
  int ab = 0, ba = 0, aba = 0, bab = 0;
  vector<int> afor(n), aback(n), bfor(n), bback(n);

  int cnt_b = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') afor[i] = cnt_b;
    else cnt_b++;
  }
  cnt_b = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == 'a') aback[i] = cnt_b;
    else cnt_b++;
  }
  // print(afor);
  // print(aback);
  for (auto &u : afor) ab += u;
  for (auto &u : aback) ba += u;
  // trace(ab);
  // trace(ba);

  for (int i = 0; i < n; i++) {
    aba += min(afor[i], aback[i]);
  }
  // trace(aba);

  int cnt_a = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'b') bfor[i] = cnt_a;
    else cnt_a++;
  }
  cnt_a = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == 'b') bback[i] = cnt_a;
    else cnt_a++;
  }
  // print(bfor);
  // print(bback);

  for (int i = 0; i < n; i++) {
    bab += min(bfor[i], bback[i]);
  }
  // trace(bab);

  cout << min({ab, ba, aba, bab}) << nl;

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