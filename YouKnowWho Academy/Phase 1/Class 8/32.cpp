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

int Q(int l, int r) {
  cout << "? " << l << " " << r << endl;
  int x; cin >> x;
  return x;
}

void solve() 
{
  int n; cin >> n;
  int a_smax = Q(1, n);

  bool left = false;
  if (a_smax != 1 and Q(1, a_smax) == a_smax) left = true;
  if (left) {
    int l = 1, r = a_smax - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (Q(mid, a_smax) == a_smax) l = mid + 1;
      else r = mid - 1;
    }
    cout << "! " << r << endl;
  }
  else {
    int l = a_smax + 1, r = n;
    while (l < r) {
      int mid = l + (r - l) / 2;
      if (Q(a_smax, mid) == a_smax) r = mid - 1;
      else l = mid + 1;
    }
    cout << "! " << l << endl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}