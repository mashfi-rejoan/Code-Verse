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
  vector<int> v(n), ans;
  for (int i = 0; i < n; i++) cin >> v[i];
  int sum_dif = 0;
  for (int i = 0; i < n - 1; i++) {
    int dif = abs(v[i] - v[i + 1]);
    sum_dif += dif;
  }
  
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      int temp = sum_dif - abs(v[i] - v[i + 1]);
      ans.push_back(temp);
    }
    else if (i == n - 1) {
      int temp = sum_dif - abs(v[i] - v[i - 1]);
      ans.push_back(temp);
    } 
    if (i >= 1 and i <= n - 2) {
      int temp = sum_dif - (abs(v[i] - v[i - 1]) + abs(v[i] - v[i + 1])) + abs(v[i - 1] - v[i + 1]);
      // trace(temp);
      ans.push_back(temp);
    }
  }
  // print(ans); cout << nl;
  cout << *min_element(all(ans)) << nl;

  
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