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

const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int t;
int powerTwo[N];
void mash () {
  powerTwo[0] = 1;
  for (int i = 1; i < N; i++) {
    powerTwo[i] = powerTwo[i - 1] * 2 % mod;
  }
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 5);
  for (int i = 1; i <= n; i++) cin >> v[i];
  sort(v.begin() + 1, v.begin() + n + 1);
  // print(v);
  int smallest = 0, largest = 0;
  for (int i = 1; i <= n; i++) {
    int contrib_s = 1LL * v[i] * (powerTwo[n - i] - 1) % mod;
    smallest = (smallest + contrib_s) % mod; 
    int contrib_l = 1LL * v[i] * (powerTwo[i - 1] - 1) % mod;
    largest = (largest + contrib_l) % mod;
  }
  int ans = ((largest - smallest) % mod + mod) % mod;
  cout << "Case #" << t << ": " << ans << nl; 
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  mash();
  int testCase; cin >> testCase;
  for (t = 1; t <= testCase; t++) solve();

  return 0;
}