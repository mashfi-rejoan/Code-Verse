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

const int N = 2000 + 9;
int a[N], prefXor[N];
int getXor (int l, int r) {
  return (prefXor[r] ^ prefXor[l- 1]);
}

void solve() 
{
  int n; cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    ans = (ans ^ a[i]);
  }
  if (ans == 0) {
    yes;
    return;
  }
  for (int i = 1; i <= n; i++) {
    prefXor[i] = (prefXor[i - 1] ^ a[i]);
  }

  for (int i = 1; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int x = getXor(1, i);
      int y = getXor(i + 1, j);
      int z = getXor(j + 1, n);
      if (x == y and y == z) {
        yes;
        return;
      }
    }
  }
  no;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}