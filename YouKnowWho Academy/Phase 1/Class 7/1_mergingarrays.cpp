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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m; cin >> n >> m;
  vector<int> a(n), b(m), ans;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // print(a);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  } 
  // print(b);
  int i = 0, j = 0;
  while(i < (int)a.size() and j < (int)b.size()) {
    // cout << a[i] << ' ' << b[i] << nl;
    if (a[i] < b[j]) {
      ans.push_back(a[i]);
      i++;
    } 
    else {
      ans.push_back(b[j]);
      j++;
    }
    // print(ans); cout << nl;
  }
  // cout << i << ' ' << j << nl;
  while(i < (int)a.size()) {
    ans.push_back(a[i]);
    i++;
  }
  while(j < (int)b.size()) {
    ans.push_back(b[j]);
    j++;
  }
  print(ans);
  cout << nl;

  return 0;
}