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
  int x, y, z; cin >> x >> y >> z;
  int a = (x & y);
  int b = (y & z);
  int c = (x & z);
  // cout << a << ' ' << b << ' ' << c << nl;
  // trace((a & b)); 
  // trace((b & c)); 
  // trace((a & c)); 
  if (a == b and b == c) yes;
  else no;
   
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}