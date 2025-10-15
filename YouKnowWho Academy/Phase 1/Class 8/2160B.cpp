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
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int cur = 1;
  cout << cur << ' ';
  int prev_dif = 1;
  for (int i = 1; i < n; i++) {
    int cur_dif = abs(v[i] - v[i - 1]);
    if (prev_dif >= cur_dif) {
      cout << cur << ' ';
    }
    else {
      cur++;
      cout << cur << ' ';
    }
    prev_dif = cur_dif;
  }
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