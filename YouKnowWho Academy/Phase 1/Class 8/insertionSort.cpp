/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/
//insertion sort

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
    int temp = a[i];
    // trace(temp);
    int j = i - 1;
    while (j >= 1 and a[j] > temp) {
      // trace(a[j]);
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = temp;
    printArray(n);
  }
  printArray(n);

  return 0;
}