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

string query (int x) {
    cout << x << endl;
    cout.flush();
    string s; cin >> s;
    return s;
}

int32_t main() {
  ios_base::sync_with_stdio(false);

  int l = 1, r = 1e6, ans = -1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    string s = query(mid);
    if (s == ">=") {
        ans = mid;
        l = mid + 1;
    }
    else {
        r = mid - 1;
    }
  }
  cout << "! "<< ans << endl;
  cout.flush();

  return 0;
}
