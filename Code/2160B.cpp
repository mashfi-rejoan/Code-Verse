/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

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



void solve() 
{
  int n; cin >> n;
  vector<int> a(n + 1), temp(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int cur = 1;
  temp[1] = cur;
  for (int i = 2; i <= n; i++) {
    int del = a[i] - a[i - 1];
    if (i - del <= 0) {
      temp[i] = ++cur;
    }
    else temp[i] = temp[i - del];
  }
  for (int i = 1; i <= n; i++) {
    cout << temp[i] << ' ';
  }
  cout << nl;
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