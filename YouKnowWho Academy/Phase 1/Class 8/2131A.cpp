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
  vector<int> a(n), b(n);
  for (auto &u : a) cin >> u;
  for (auto &u : b) cin >> u;

  int cnt = 0;
  while (true) {
    bool flag = false;
    cnt++;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        a[i]--;
        flag = true;
        break;
      }
      else if (a[i] < b[i]) {
        a[i]++;
      }
    }
    if (!flag) {
      cout << cnt << nl;
      return;
    }
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}