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

int set_kth_bit(int x, int k) {
  return x | (1 << k);
}

void BNY (int x) {
    bitset<10> bs(x);
    cout << x << " = " << bs << nl; 
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    map<char, int> mp;
    for (auto ch : s) {
      mp[ch]++;
    }
    int num = 0;
    for (char i = 'a'; i <= 'z'; i++) {
      int k = i - 'a';
      if (mp[i] & 1) {
        num = set_kth_bit(num, k);
      }
    }
    v[i] = num;
  }
  map<int, int> mp;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += mp[v[i]];
    for (int k = 0; k < 26; k++) {
      ans += mp[(v[i] ^ (1 << k))];
    }
    mp[v[i]]++;
  }
  cout << ans << nl;

  return 0;
}