/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

// Activity Selection Algorithm
// Input:
// 6
// 1 2
// 3 4
// 0 6
// 5 7
// 5 9
// 8 9

// Output:
// 1 2
// 3 4
// 5 7
// 8 9
// 4

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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<pair<int,int>> vp;
  for (int i = 1; i <= n; i++) {
    int start, end; cin >> start >> end;
    vp.push_back({end, start});
  }
  sort(all(vp));
  int lastUpdatedStart = -1, lastUpdatedEnd = -1;
  int cnt = 0;
  for (auto [end, start] : vp) {
    // cout << start << ' ' << end << nl;
    if (lastUpdatedEnd <= start) {
      cnt++;
      lastUpdatedStart = start;
      lastUpdatedEnd = end;
      cout << start << ' ' << end << nl;
    }
  }
  cout << cnt << nl;

  return 0;
}