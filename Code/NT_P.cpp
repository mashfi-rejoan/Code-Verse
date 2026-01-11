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

bool is_prime(int x) {
  if (x <= 1) return false;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

void solve() 
{
  int n; cin >> n;
  int cnt = 2, ans = 1;
  while(cnt) {
    if (is_prime(n)) {
      ans *= n;
      cnt--;
    } 
    n++;
  }
  cout << ans << nl;
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