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

const int N = 1e5 + 9;
int wt[N], val[N];


int knapsack (int w, int n) {
  if (n == 0 or w == 0) return 0;
  int pick = 0;
  if (wt[n - 1] <= w) {
    pick = val[n - 1] + knapsack(w - wt[n - 1], n - 1);
  }
  int notPick = knapsack(w, n - 1);
  return max(pick, notPick);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, w; cin >> n >> w;
  for (int i = 0; i < n; i++) {
    cin >> wt[i] >> val[i];
  }

  cout << knapsack(w, n) << nl;

  return 0;
}