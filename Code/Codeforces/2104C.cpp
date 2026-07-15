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



void solve() 
{
  int n; cin >> n;
  string s; cin >> s;
  multiset<int> alice, bob;
  int card = 0;
  for (auto ch : s) {
    card++;
    if (ch == 'A') alice.insert(card);
    else bob.insert(card);
  }
  while (true) {
    if (alice.empty()) {
      cout << "Bob\n";
      return;
    }
    else if (bob.empty()) {
      cout << "Alice\n";
      return;
    }
    else if (alice.find(1) != alice.end() and alice.find(n) != alice.end()) {
      cout << "Alice\n";
      return;
    }
    else if (bob.find(1) != bob.end() and bob.find(n) != bob.end()) {
      cout << "Bob\n";
      return;
    }
    else {
      int a = *alice.begin();
      int b = *bob.rbegin();

      if (a == 1 or a == n) {
        if (a == 1 and (b != n or bob.size() >= 2)) {
          bob.insert(a);
          alice.erase(alice.find(a));
        }
        else if (a == n and bob.find(1) != bob.end()) {
          bob.insert(a);
          alice.erase(alice.find(a));
        }
        else {
          alice.insert(b);
          bob.erase(bob.find(b));
        }
      }
      else {
        if (a > b) {
          alice.insert(b);
          bob.erase(bob.find(b));
        }
        else if (b > a) {
          bob.insert(a);
          alice.erase(alice.find(a));
        }
      }
    }
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}