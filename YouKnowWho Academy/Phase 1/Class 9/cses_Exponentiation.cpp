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

const int m = 1e9 + 7;

// binary exponentiaton
int power(int x, int n, int m) {
  if (n == 0) return 1 % m;
  int cur = power(x, n / 2, m);
  if (n % 2 == 0) return 1LL * cur * cur % m;
  else return 1LL * cur * cur % m * x % m;
}

void solve() 
{
  int a, b; cin >> a >> b;
  cout << power(a, b, m) << nl;
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