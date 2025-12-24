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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  // print(v); cout << nl;
  if (v[0] == -1 and v[n - 1] == -1) {
    v[0] = 0;
    v[n - 1] = 0;
  }
  if (v[0] == -1 and v[n - 1] != -1) {
    v[0] = v[n - 1];
  }
  else if (v[n - 1] == -1 and v[0] != -1) {
    v[n - 1] = v[0];
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == -1) v[i] = 0;
  }
  
  cout << abs(v[n - 1] - v[0]) << nl;

  print(v);
  cout << nl;
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