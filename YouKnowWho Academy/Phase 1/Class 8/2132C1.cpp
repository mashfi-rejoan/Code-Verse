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

int power(int x, int y) {
  int result = 1;
  while (y > 0) {
    if (y & 1) {         
      result *= x;
    }
    x *= x;              
    y >>= 1;             
  }
  return result;
}

int deal (int exp) {
  return power(3, exp + 1) + exp * power(3, exp - 1);
}

void solve() 
{
  int n; cin >> n;
  int cost = 0;
  while (n >= 3) {
    int exp = 0;
    int i = 1;
    while (i <= n) {
      i *= 3;
      exp++;
    }
    exp--;
    // trace(exp);
    i /= 3;
    n -= i;
    // trace(n);
    cost += deal(exp);
  }
  cost += n * 3;
  cout << cost << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}