/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/
//quick sort

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
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  cout << nl;
}

int partition (int l, int h) {
  int pivot = a[l];
  int i = l, j = h;
  while (true) {
    while (a[i] <= pivot and i <= h) {
      i++;
    }
    while (a[j] > pivot and j >= l) {
      j--;
    }
    if (i >= j) break;
    swap(a[i], a[j]);
  }
  swap(a[l], a[j]);
  return j;
}

void quickSort(int l, int h) {
  if (l < h) {
    int j = partition(l, h);
    quickSort(l, j - 1);
    quickSort(j + 1, h);
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  quickSort(0, n - 1);
  printArray(n);

  return 0;
}