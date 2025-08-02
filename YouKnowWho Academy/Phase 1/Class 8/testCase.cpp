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
  vector<int> v(n + 1), temp;
  multiset<int> ms;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    ms.insert(v[i]);
  }

  for (int i = 1; i <= n; i++) {
    temp.push_back(v[i]);
    temp.push_back(upper_bound(v.begin() + i, v.end(), v[i]));
    if ((int)temp.size() == 2) {

    }
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