/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <bits/stdc++.h>
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

void solve() 
{
  
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
  nCr = (n-1)Cr + (n-1)C(r-1) //Recurrence relation
  nRr = nCr * r! //Recurrence relation

nPr (Permutation):
  nPr = n! / (n - r)!

Permutation with duplicates:
  Total permutations = n! / (c1! * c2! * ... * ck!)
  where c1, c2, ..., ck are frequencies of repeated elements

const int N = 1e6 + 2, mod = 1e9 + 7;
int fact[N], ifact[N];
int bigmod();
int inverse (int a) {
  return bigmod(a, mod - 2);
}
void pre_calc() {
  fact[0] = 1;
  for (int i = 1; i < N; i++) {
    fact[i] = fact[i - 1] * i % mod;
  }
  ifact[N - 1] = inverse(fact[N - 1]);
  for (int i = N - 2; i >= 0; i--) {
    // ifact[i] = inverse(fact[i]);
    ifact[i] = ifact[i + 1] * (i + 1) % mod;
  }
}


// ---------- Arithmetic Progression (AP) ----------
nth term:
  a_n = a + (n - 1) * d

Sum of first n terms:
  S_n = n * (2a + (n - 1) * d) / 2
  OR
  S_n = n * (a + l) / 2


// ---------- Geometric Progression (GP) ----------
nth term:
  a_n = a * r^(n - 1)

Sum of first n terms (r != 1):
  S_n = a * (r^n - 1) / (r - 1)

Sum of infinite GP (|r| < 1):
  S_inf = a / (1 - r)


// valid polygon: the sides of the polygon is less than the sum of other sides

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

// Bit manipulation
for (int mask = 0; mask < (1 << n); mask++) {
  for (int i = 0; i < n; i++) {
    if ((mask >> i) & 1) {
      cout << a[i] << ' ';
    }
  }
  cout << '\n';
}

// ---------- 2D Stuffs ----------

2D Prefix Sum => pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
2D Sub-Rectangle Sum => ans = pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
{
  d[x1][y1] += x;
  d[x2 + 1][y1] -= x;
  d[x1][y2 + 1] -= x;
  d[x2 + 1][y2 + 1] += x;
}


// ---------- Number Theory ----------
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


