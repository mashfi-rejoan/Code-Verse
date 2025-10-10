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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  if (n == 1) {
    cout << 1 << nl;
    return 0;
  }
  if (n == 2 or n == 3) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  // int cnt = 0;
  for (int i = n; i >= 1; i--) {
    if (i % 2 != 0) {
      cout << i << ' ';
      // cnt++;
    } 
  }
  for (int i = n; i >= 1; i--) {
    if (i % 2 == 0) {
      cout << i << ' ';
      // cnt++;
    } 
  }
  cout << nl;
  // trace(cnt);

  return 0;
}