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
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, k; cin >> n >> k;
  string op; cin >> op;
  
  string s(n, '+');
  if (n == k) {
    cout << string(n, '-') << nl;
    return;
  }

  // trace(s);
  int l = 0, r = n - 1;
  for (auto& ch : op) {
    if (l <= r) {
      if (ch == '0') {
        s[l] = '-';
        l++;
      }
      else if (ch == '1') {
        s[r] = '-';
        r--;
      }
    }
  }

  for (auto& ch : op) {
    if (l <= r) {
      if (ch == '2') {
        
        s[l] = '?';
        l++;
        s[r] = '?';
        r--;
      }
  
    }
  }
  cout << s << nl;
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