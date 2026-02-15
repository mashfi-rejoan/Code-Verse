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
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n; cin >> n;
  set<int> st;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    st.insert(i + 1);
  }
  for (auto& u : v) {
    st.erase(u);
  }
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == 0 and !st.empty()) {
      v[i] = *st.begin();
      st.erase(st.begin());
    }
  }
  int l = 0, r = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] != i + 1) {
      l = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] != i + 1) {
      r = i;
      break;
    }
  }
  // trace(l);
  // trace(r);
  if (l == r) {
    cout << 0 << nl;
    return;
  }
  cout << r - l + 1 << nl;
  // print(v); cout << nl;
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