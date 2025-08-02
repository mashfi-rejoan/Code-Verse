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
  vector<int> v(n);
  for (auto &u : v) cin >> u;
  int e = 0, o = 0;
  for (auto u : v) {
    if (u % 2 == 0) e++;
    else o++;
  }
  int xe = 0, yo = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) xe++;
    else yo++;
  }
  // trace(xe); trace(yo); trace(e); trace(o);
  if (e == xe and o == yo) cout << "YES\n";
  else if (e == yo and o == xe) cout << "YES\n";
  else cout << "NO\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}