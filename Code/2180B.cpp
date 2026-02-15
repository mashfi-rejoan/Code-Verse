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
#define print(x) for(auto u : x) cout << u
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n; cin >> n;
  vector<string> vs(n);
  for (int i = 0; i < n; i++) cin >> vs[i];
    // sort(all(vs));
  string s = vs[0];
  for (int i = 1; i < n; i++) {
    if (s + vs[i] < vs[i] + s) s += vs[i];
    else {
      string k = vs[i] + s;
      s = k;
    }
  }
  cout << s << nl;

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