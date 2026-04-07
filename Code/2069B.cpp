/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;



void solve() 
{
  int n, m; cin >> n >> m;
  int arr[n + 9][m + 9];
  map<int, int> mp;

  for (int i = 0; i <= n + 5; i++) {
    for (int j = 0; j <= m + 5; j++) {
      arr[i][j] = -1;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
      mp[arr[i][j]] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (arr[i][j] == arr[i - 1][j] or arr[i][j] == arr[i + 1][j] or arr[i][j] == arr[i][j - 1] or arr[i][j] == arr[i][j + 1]) {
        mp[arr[i][j]] = 2;
      }
    }
  }

  int sum = 0, mxVal = 0;;
  for (auto [k, v] : mp) {
    sum += v;
    mxVal = max(v, mxVal);
  }
  cout << sum - mxVal << nl;

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