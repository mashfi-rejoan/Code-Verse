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
  vector<int> v(n + 5);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  // print(v); cout << nl;
  vector<int> d;
  int even = 0, odd = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      even += v[i];
    }
    else {
      odd += v[i];
    }
    d.push_back(even - odd);
  }
  // print(d); cout << nl;
  map<int, int> mp;
  mp[0] = 1;
  for (int i = 0; i < (int)d.size(); i++) {
    if (mp.find(d[i]) != mp.end()) {
      cout << "YES\n";
      return;
    }
    mp[d[i]] = i;
  }
  cout << "NO\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}