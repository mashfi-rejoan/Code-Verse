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
  vector<int> v(n + 9), ans;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  v[n] = v[0];

  for (int i = 0; i < n; i++) {
    ans.push_back(max(v[i], v[i + 1]));
  }
  sort(all(ans));
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += ans[i];
  }
  cout << sum << nl;

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