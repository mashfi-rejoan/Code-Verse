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

int ask(int l, int r) {
  int p = r - l + 1;
  cout << "? " << p << ' ';
  for (int i = l; i <= r; i++) cout << i << ' ';
    cout << endl << flush;
  int x; cin >> x;
  return x;
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 1), pref(n + 1);
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + v[i];

  int l = 1, r = n, ans = -1;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    int actual = ask(l, mid);
    int cur = pref[mid] - pref[l - 1]; 
    if (actual > cur) {
      ans = mid;
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << "! " << ans << endl << flush;
  

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