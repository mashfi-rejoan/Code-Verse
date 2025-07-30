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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;

  if (n == 0) {
    cout << 10 << nl;
    return 0;
  } 
  else if (n == 1) {
    cout << 1 << nl;
    return 0;
  }

  vector<int> digits;
  for (int i = 9; i >= 2; i--) {
    while (n % i == 0) {
      digits.push_back(i);
      n /= i;
    }
  }
  if (n != 1) {
    cout << -1 << nl;
    return 0;
  }

  sort(all(digits));
  for (auto u : digits) cout << u;
    cout << nl;

  return 0;
}