/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/
// selection sort

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";

const int N = 1e5 + 9;
int a[N];

void printArray (int n) {
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  cout << nl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    int minIdx = i;
    for (int j = i + 1; j <= n; j++) {
      if (a[j] < a[minIdx]) {
        minIdx = j;
      }
    }
    printArray(n);
    swap(a[i], a[minIdx]);
  }
  printArray(n);

  return 0;
}