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
  for (auto &i : v) cin >> i;
  // int cnt0 = 0, cnt1 = 0;
  // int xorr = 0;
  // for (auto u : v) {
  //   if (u == 0) cnt0++;
  //   else cnt1++;
  //   xorr += u;
  // }
  // // trace(xorr);
  // if (cnt1 == n) cout << "Alice\n";
  // else if (cnt0 == n) cout << "Bob\n";
  // else if (cnt1 >= cnt0) cout << "Alice\n";
  // else cout << "Bob\n";
  if (v[0] == 0 and v[n - 1] == 0) cout << "Bob\n";
  else cout << "Alice\n";
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