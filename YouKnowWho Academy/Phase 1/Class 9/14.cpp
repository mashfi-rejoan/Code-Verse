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

const int mod = 10000007;
int bigmod(int x, int n, int mod) {
  x %= mod;
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}


int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while(true) {
    int n, k; cin >> n >> k;
    if (n == 0 and k == 0) return 0;
    int s = ((2 * bigmod(n-1, k, mod) % mod) + bigmod(n, k, mod)) % mod;
    int p = ((2 * bigmod(n-1, n-1, mod) % mod) + bigmod(n, n, mod)) % mod;
    cout << (s + p) % mod << nl;
  }

  return 0;
}