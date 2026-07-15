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
  int n; cin >> n;
  vector<int> v(n), a(n), cmp(n), ans;
  for (auto &u : v) cin >> u;

  if (is_sorted(all(v))) {
    cout << "NO" << nl;
    return;
  }
  a = v;
  sort(all(a));
  // print(a);
  for (int i = 0; i < n; i++) {
    if (v[i] == a[i]) {
      cmp[i] = -1;
    }
    else {
      cmp[i] = v[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (cmp[i] != -1) {
      ans.push_back(cmp[i]);
    }
  }

  cout << "YES\n";
  cout << (int)ans.size() << nl;
  print(ans);
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