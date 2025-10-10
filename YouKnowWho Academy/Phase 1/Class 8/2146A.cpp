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

const int N = 109;

void solve() 
{
  int n; cin >> n;
  vector<int> a(n + 1), v(N);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    v[a[i]]++;
  }
  int ans = LLONG_MIN;
  for (int i = 1; i <= N - 3; i++) {
    int cnt = 0;
    for (int j = 1; j <= N - 3; j++) {
      if (v[j] >= v[i]) cnt++;
    }
    int curLen = cnt * v[i];
    ans = max(ans, curLen);
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}