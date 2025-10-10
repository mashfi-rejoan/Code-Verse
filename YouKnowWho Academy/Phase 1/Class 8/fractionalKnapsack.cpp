/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

// Fractional Knapsack Algoritm - Greedy Approch
// Input:
// 3 50
// 10 60
// 20 100
// 30 120

// Output:
// maxProfit: 240 

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

  int n, bucket; cin >> n >> bucket;
  vector<tuple<int, int, int>> vt;
  for (int i = 1; i <= n; i++) {
    int w, v; cin >> w >> v;
    int each = v / w;
    vt.push_back({each, w, v});
  }
  sort(allr(vt));
  int maxProfit = 0;
  for (auto [each, w, v] : vt) {
    if (bucket <= 0) break;
    else if (w <= bucket) {
      bucket -= w;
      maxProfit += v;
    }
    else {
      maxProfit += (bucket * each);
      bucket -= w;
    }
    // cout << each << ' ' << w << ' ' << v << nl;
  }
  trace(maxProfit);


  return 0;
}