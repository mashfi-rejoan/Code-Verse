/*
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include <bits/stdc++.h>
using namespace std;

#define nl          '\n'
#define int         long long int
#define all(x)      x.begin(), x.end()
#define allr(x)     x.rbegin(), x.rend()
#define print(x)    for (auto u : x) cout << u << ' '
#define trace(x)    cout << #x << ": " << x << " \n";

const int N = 1e6 + 5;
int d[N];

/* 
-------- Bit Stuffs (GCC Built-in) --------
Count of set bits                 => __builtin_popcount(x) / __builtin_popcountll(x)
Count of leading zeros            => __builtin_clz(x) / __builtin_clzll(x)
Count of trailing zeros           => __builtin_ctz(x) / __builtin_ctzll(x)
Index of Lowest SET bit (0-based) => __builtin_ffs(x) - 1 / __builtin_ffsll(x) - 1
Index of Lowest UNSET bit         => __builtin_ffs(~x) - 1 / __builtin_ffsll(~x) - 1
Index of Highest SET bit          => __lg(x)
Check Power of Two                => __builtin_popcountll(x) == 1
*/

/* 
-------- 2D Stuffs --------
2D Prefix Sum => pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
2D Sub-Rectangle sum => ans = pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
d[x1][y1] += x;
d[x2 + 1][y1] -= x;
d[x1][y2 + 1] -= x;
d[x2 + 1][y2 + 1] += x;
*/

// -------- Math Tools --------
void countDivisor() {
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


//check if there is a substring a, in the string s
book is_there (string &s, string &a) {
  return (s.find(a) != std::string::npos);
}

/* Contribution technique
Sum of pair sums => (2 * n * a[i])
Sum of subarray sums => (a[i] * i * (n - i + 1))
Sum of subset sums => (((1 << n) - 1) * a[i])
Product of pair product => a[i]^2n
Number of pairs => (n * (n - 1)) / 2
Number of subarrays => (n * (n + 1)) / 2

*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);



  return 0;
}
