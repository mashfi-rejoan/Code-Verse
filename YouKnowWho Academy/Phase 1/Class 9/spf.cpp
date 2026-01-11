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

const int N = 1e6 + 9;
vector<int> spf(N + 1, 1);

void SPF() {
  for (int i = 1; i <= N; i++) spf[i] = i;
  int n = N;
  spf[0] = spf[1] = 0;
  for (int i = 2; i * i <= n; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        if (spf[j] == j) {
          spf[j] = i;
        }
      }
    }
  }
  // print(spf);
  vector<int> temp;
  while (n > 1) {
    temp.push_back(spf[n]);
    n = n / spf[n];
  }
  print(temp); cout << nl;
}


void solve() 
{
  SPF();
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}