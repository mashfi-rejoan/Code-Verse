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
  // int a[n + 1][n + 1];
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     a[i][j] = j;
  //   }
  // }

  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     cout << a[i][j] << ' ';
  //   }
  //   cout << nl;
  // }

  int step = (n - 1) + (n - 2);
  cout << step << nl;
  for (int i = 2; i <= n; i++) {
    cout << i << ' ' << 1 << ' ' << i << nl;
  }
  int remain = step - (n - 1);
  // cout << remain << nl;
  for (int i = 1; i <= remain; i++) {
    cout << i << ' ' << i + 1 << ' ' << n << nl;
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