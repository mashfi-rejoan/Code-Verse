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
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  cout << 1 << ' ';
  for (int i = 1; i <= n; i++) {
    if (v[i] - v[i - 1] == i) cout << (i + 1) << ' ';
    else if (v[i] - v[i - 1] < i) {
      cout << (i - 2) << ' ';
    }
    else {
      cout << (i + 1) << ' ';
    }
  }
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