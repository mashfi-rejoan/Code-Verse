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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    st.insert(x);
    v[i] = x;
  }
  if (st.size() == 1) {
    cout << 1 << nl;
    return;
  }
  sort(all(v));
  int k = v[0];
  int cnt = 1;
  // print(v); cout << nl;
  for (int i = 1; i < n; i++) {
    // trace(k); trace(v[i]);
    if (k < v[i]) {
      cnt++;
      k = v[i];
    }
  }
  cout << cnt << nl;

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}