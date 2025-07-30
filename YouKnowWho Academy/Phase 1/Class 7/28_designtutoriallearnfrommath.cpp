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

const int N = 1e6 + 9;
int p[N];
bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; (1LL * i * i) <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;

  for (int i = 1; i <= N; i++) {
    if(isPrime(i)) p[i] = 1;
  }

  for (int i = 4; i <= N; i++) {
    if (p[i] == 0) {
      int x = n - i;
      if (p[x] == 0) {
        cout << i << ' ' << x << nl;
        return 0;
      }
    }
  }

  return 0;
}