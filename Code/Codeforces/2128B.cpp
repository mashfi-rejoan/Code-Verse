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

  int l = 0, r = n - 1;
  int state = 1;
  while (l <= r) {
    if (state == 2) {
      int temp = min(v[l], v[r]);
      if (temp == v[l]) {
        cout << "L";
        l++;
        state = 1;
      }
      else {
        cout << "R";
        r--;
        state = 1;
      }
    }
    else if (state = 1) {
      int temp = max(v[l], v[r]);
      if (temp == v[l]) {
        cout << "L";
        l++;
        state = 2;
      }
      else {
        cout << "R";
        r--;
        state = 2;
      }
    }
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