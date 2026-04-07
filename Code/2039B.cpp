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
  string s; cin >> s;
  int n = sz(s);

  for (int i = 0; i < n - 1; i++) {
    set<char> st;
    st.insert(s[i]);
    st.insert(s[i + 1]);

    if (sz(st) == 1) {
      cout << s[i] << s[i + 1] << nl;
      return;
    }
  }

  for (int i = 0; i < n - 2; i++) {
    set<char> st;
    st.insert(s[i]);
    st.insert(s[i + 1]);
    st.insert(s[i + 2]);

    if (sz(st) == 3) {
      cout << s[i] << s[i + 1] << s[i + 2] << nl;
      return;
    }
  }

  cout << -1 << nl;
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