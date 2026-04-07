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

// no of pair = (n * (n - 1)) / 2;

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

nPr (Permutation):
  nPr = n! / (n - r)!
  nPr = nCr * r! //Recurrence relation

// Recurrence relation:
// 1. mod prime na holeo ok
// 2. N ≤ 2000–3000 safe

Permutation with duplicates:
  Total permutations = n! / (c1! * c2! * ... * ck!)
  where c1, c2, ..., ck are frequencies of repeated elements


// factorial and inverse factorial precalculation upto 2e6

const int N = 2e6 + 9, mod = 1e9 + 7;
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

//Precompute prefix bits counts
const int N = 2e5 + 9;
int bits[N][33];
void count_pref_bits (vector<int> arr) {
  int n = sz(arr);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 32; j++) {
      if ((arr[i] & (1LL << j)) == 0) bits[i][j] = 1;
      else bits[i][j] = 0;
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 32; j++) {
      bits[i][j] += bits[i - 1][j];
    }
  }
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

//Generate and store all prime under 1e6
// O(n log log n)

const int N = 1e6 + 9;
vector<int> prime;
bitset<N> is_composite;
void sieve() {
  is_composite[0] = is_composite[1] = 1;

  for (int i = 2; i * i < N; i++) {
    if (!is_composite[i]) {
      for (int j = i * i; j < N; j += i) {
        is_composite[j] = 1;
      }
    }
  }

  for (int i = 2; i < N; i++) {
    if (!is_composite[i]) {
      prime.push_back(i);
    }
  }
}

//prime factorization
map<int, int> factor;  // prime -> power
for (int i = 2; i * i <= n; i++) {
  if (n % i == 0) {
    int cnt = 0;
    while (n % i == 0) {
      n /= i;
      cnt++;
    }
    factor[i] = cnt;
  }
}


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


