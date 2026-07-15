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

int gcd(int a, int b) {
  if (b == 0)
      return a;
  return gcd(b, a % b);
}

long long findLCM(vector<int> &v, int n) {
  long long ans = v[0];
  for (int i = 1; i < n; i++) {
    ans = (((long long)v[i] * ans) / (gcd(v[i], ans)));
  }
  return ans;
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int mash = findLCM(v, n);
  // cout << mash << nl;
  vector<int> div;
  for (int i = 2; i * i <= mash; i++) {
    if (mash % i == 0) {
      div.push_back(i);
    }
  }
  int ans = *max_element(all(div));
  int saikat = mash / ans;
  cout << saikat << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}