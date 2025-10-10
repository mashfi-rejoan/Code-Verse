/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n, m; cin >> n >> m;
  string s; cin >> s;
  set<int> st;
  for (int i = 1; i <= m; i++) {
    int x; cin >> x;
    st.insert(x);
  }
  // print(st); cout << nl;
  int cur = 1;
  for (auto c : s) {
    cur++;
    if (c == 'B') {
      while(st.find(cur) != st.end()) cur++;
    }
    st.insert(cur);
    if (c == 'B') {
      while(st.find(cur) != st.end()) cur++;
    }
  }
  cout << st.size() << nl;
  for (auto& u: st) cout << u << ' ';
    cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}