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


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m; cin >> n >> m;
  vector<int> a(n + 10), b(m + 10);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i];
  }

  int i = 1, j = 1;
  int cnt = 0;
  while (i <= n and j <= m) {
    if (a[i] < b[j]) {
      cnt++;
      i++;
    }
    else {
      cout << cnt << ' ';
      j++;
    }
  }
  while(j <= m) {
    if (i > n) {
      int fixed = a[n];
      if (fixed < b[j]) {
        cout << n << ' ';
        j++;
      }
    }
    else if (i <= n){
      if (a[i] < b[j]) {
        cnt++;
        i++;
      }
      else {
        cout << cnt << ' ';
        j++;
      }
    }
    
  }

  

  return 0;
}