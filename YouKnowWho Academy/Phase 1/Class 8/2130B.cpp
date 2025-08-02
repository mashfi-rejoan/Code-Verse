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
  int n, s; cin >> n >> s;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int cntZero = 0, cntOne = 0, cntTwo = 0, sum = 0;
  for (auto &u : v) {
    sum += u;
    if (u == 0) cntZero++;
    else if (u == 1) cntOne++;
    else if (u == 2) cntTwo++;
  }

  if (s < sum) {
    print(v);
    cout << nl;
  }
  else if (s - sum == 1) {
    while (cntZero--) cout << 0 << ' ';
    while (cntTwo--) cout << 2 << ' ';
    while (cntOne--) cout << 1 << ' ';
    cout << nl;
  }
  else cout << -1 << nl;

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}