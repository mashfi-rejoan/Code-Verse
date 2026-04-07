/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;

//miller rabin prime test
// O(log n)

int mod_mul(int a, int b, int mod) {
  return (__int128)a * b % mod;
}

int mod_pow(int a, int d, int mod) {
  int res = 1;
  while (d) {
    if (d & 1) res = mod_mul(res, a, mod);
    a = mod_mul(a, a, mod);
    d >>= 1;
  }
  return res;
}

bool isPrime(int n) {
  if (n < 2) return false;

  for (int p : {2,3,5,7,11,13,17,19,23}) {
    if (n % p == 0) return n == p;
  }

  int d = n - 1, s = 0;
  while ((d & 1) == 0) {
    d >>= 1;
    s++;
  }

  for (int a : {2,325,9375,28178,450775,9780504,1795265022}) {
    if (a % n == 0) continue;

    int x = mod_pow(a, d, n);
    if (x == 1 || x == n - 1) continue;

    bool composite = true;
    for (int r = 1; r < s; r++) {
      x = mod_mul(x, x, n);
      if (x == n - 1) {
        composite = false;
        break;
      }
    }

    if (composite) return false;
  }

  return true;
}

void solve() 
{
  int n; cin >> n;
  if (n == 1) {
    cout << 2 << nl;
    return;
  }
  if (n & 1) n += 2;
  else n++;
  while (true) {
    if (isPrime(n)) {
      cout << n << nl;
      return;
    }
    n += 2;
  }
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