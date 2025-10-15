/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n; cin >> n;
  set<int> st;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    st.insert(x);
  }
  vector<int> v;
  for (auto &u : st) v.push_back(u);
  // print(v); cout << nl;
  int i = 0;
  for (i = 0; i < (int)v.size(); i++) {
    if (i != v[i]) {
      cout << i << nl;
      return;
    }
  }
  cout << i << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}