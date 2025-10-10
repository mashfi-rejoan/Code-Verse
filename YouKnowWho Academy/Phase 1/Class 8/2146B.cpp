/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define no cout << "no\n"
#define yes cout << "yes\n"
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n, m; cin >> n >> m;
  map<int, int> mp;
  
  int cnt1 = 0, cnt2 = 0;
  for (int i = 1; i <= n; i++) {
    int l; cin >> l;
    // trace(l);
    vector<int> v;
    for (int j = 1; j <= l; j++) {
      int x; cin >> x;
      // trace(x);
      mp[x]++;
      v.push_back(x);
    }
    if ((int)mp.size() == m) {
      for (auto [x, y] : mp) {
        if (y >= 1) {
          if (y >= 2) cnt2++;
          if (y >= 3) cnt1++;
        }
      }
    }
  }

  cnt1 >= 1 or cnt2 >= 2 ? yes : no;  
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}