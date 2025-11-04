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

const int N = 3e5 + 9;

void solve() 
{
  int n; cin >> n;
  string a, b; cin >> a >> b;

  if (n == 1 and a != b) {
    no;
    return;
  }

  vector<int> zeroV, oneV;
  int zero = 0, one = 0;
  for (auto &ch : a) {
    if (ch == '0') zero++;
    zeroV.push_back(zero);

    if (ch == '1') one++;
    oneV.push_back(one);
  }
  // print(zeroV); cout << nl;
  // print(oneV); cout << nl;
  vector<bool> is_ok(n, 0);
  for (int i = 0; i < n; i++) if (zeroV[i] == oneV[i]) is_ok[i] = true;
  // print(is_ok); cout << nl;
  int it = 0;
  for (int i = n - 1; i >= 0; i--) {
    // trace(a[i]);
    if ((it & 1) and a[i] != b[i]) continue;
    else if (!(it & 1) and a[i] == b[i]) continue;
    else {
      if (is_ok[i]) {
        it++;
        continue;
      }
      else {
        no;
        return;
      }
    }
  }
  yes;

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