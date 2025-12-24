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
  int n, x, y; cin >> n >> x >> y;
  x = abs(x), y = abs(y);
  if (x < y) swap(x, y);
  string s; cin >> s;
  if (x > n or y > n) {
    no;
    return;
  }
  int cntEight = count(all(s), '8');
  int yCovers = n - x + cntEight;
  if (y <= yCovers) yes;
  else no;
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