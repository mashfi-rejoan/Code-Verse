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

bool is_vowel (char ch) {
  return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string word; cin >> word;
  int ans = 0;
    int n = (int)word.size();
    for (int i = 0; i < n; i++) {
      int k = i + 1;
      if (is_vowel(word[i])) {
        ans += 1LL * k * (n - k + 1);
      }
    }
    cout << ans << nl;

  return 0;
}