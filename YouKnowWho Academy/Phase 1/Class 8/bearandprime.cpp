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

bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool query(int x) {
  cout << x << endl;
  string s; cin >> s;
  return s == "yes";
}

int32_t main() {
  ios_base::sync_with_stdio(false);

  if (query(2 * 2) or query(3 * 3) or query(5 * 5) or query(7 * 7)) {
    cout << "composite" << endl;
    return 0;
  }
  int primeDivs = 0;
  for (int i = 2; i <= 50; i++) {
    if (isPrime(i)) primeDivs += query(i);
  }
  if (primeDivs <= 1) {
    cout << "prime" << endl;
  }
  else cout << "composite" << endl;

  return 0;
}