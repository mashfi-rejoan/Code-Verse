/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <bits/stdc++.h>
using namespace std;

// ---------- Macros ----------
#define nl '\n'
#define i128 __int128
#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"

// ---------- Contribution Technique ----------
Sum of pair sums => (2 * n * a[i])
Sum of subarray sums => (a[i] * i * (n - i + 1))
Sum of subset sums => ((1 << (n - 1)) * a[i])
Product of pair product => a[i]^2n
Number of pairs => (n * (n - 1)) / 2
Number of subarrays => (n * (n + 1)) / 2
Expected value => sum of all ways / number of ways
Sum of xor of array => 2^(n - 1) * (OR of whole array)
sum of xor of array = 2^(n - 1) * (or of the whole array)


// ---------- Combinatorics ----------
nCr (Combination):
  nCr = n! / (r! * (n - r)!)

nPr (Permutation):
  nPr = n! / (n - r)!

Permutation with duplicates:
  Total permutations = n! / (c1! * c2! * ... * ck!)
  where c1, c2, ..., ck are frequencies of repeated elements



// ---------- Bit Stuffs (GCC Built-in) ----------
Count of set bits                 => __builtin_popcount(x) / __builtin_popcountll(x)
Count of leading zeros            => __builtin_clz(x) / __builtin_clzll(x)
Count of trailing zeros           => __builtin_ctz(x) / __builtin_ctzll(x)
Index of Lowest SET bit (0-based) => __builtin_ffs(x) - 1 / __builtin_ffsll(x) - 1
Index of Lowest UNSET bit         => __builtin_ffs(~x) - 1 / __builtin_ffsll(~x) - 1
Index of Highest SET bit          => __lg(x)
Check Power of Two                => __builtin_popcountll(x) == 1

// ---------- Bitset Stuffs ----------
bitset<10> bs("1111101001");
bitset<10> p("0110110100");

bs[1];
bs.set(1);
bs.reset(0);
bs.flip(0);
bs.set();
bs.reset();
bs.flip();
bs.count();
bs.size();
bs.to_ullong();
bs.to_string();
bs.any();
bs.none();
bs.all();
bs = bs << 1;
bs = bs >> 1;
bs = bs & p;
bs = bs ^ p;
bs = ~bs;

// ---------- 2D Stuffs ----------

2D Prefix Sum => pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
2D Sub-Rectangle Sum => ans = pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
{
  d[x1][y1] += x;
  d[x2 + 1][y1] -= x;
  d[x1][y2 + 1] -= x;
  d[x2 + 1][y2 + 1] += x;
}


// ---------- Math Tools ----------
void countDivisor() {
  // Here N < 5e6 || O(NlogN)
  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) d[j]++;
  }
}

bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

// Binary exponentiation (mod)
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

// multiplicative inverse
// bigmod(a, mod-2, mod) if mod is prime
// if (m > x) then (x % m = x)
// if (m <= x) then (x % m) <= (x/2)
// if (m > (x/2)) then (x % m) = (x - m)

// mulmod binary style 
long long mulmod(long long x, long long y, long long mod) { // O(log y)
  long long ans = 0;
  while (y > 0) {
    if (y & 1) {
      ans = (ans + x) % mod;
    }
    x = (x + x) % mod;
    y >>= 1;
  }
  return ans;
}

// c++ 17 or updated needed bigO(1)
int mulmod (int x, int y, int mod) {
  return (__int128)x * y % mod;
}

// handling __int128 stuffs
i128 read() {
  string s; cin >> s;
  i128 ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '-') continue;
    ans = ans * 10 + (s[i] - '0');
  }
  return ans;
}
string to_string(__int128 x) {
  string s;
  while (x > 0) {
    s += (char)(x % 10 + '0');
    x /= 10;
  }
  reverse(s.begin(), s.end());
  return s;
}

void write(__int128 x) {
  cout << to_string(x) << '\n';
}

// ---------- Main ----------
void solve() 
{
  
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
