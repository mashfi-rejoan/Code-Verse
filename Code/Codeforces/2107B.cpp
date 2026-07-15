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
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  sort(all(v));
  int sum = accumulate(all(v), 0LL);
  v[n - 1]--;
  sort(all(v));
  if ((v[n - 1] - v[0]) > k or sum % 2 == 0) {
    cout << "Jerry\n";
  }
  else {
    cout << "Tom\n";
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