#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

void TOH (int disk, char start, char end, char mid) {
  if (disk == 0) return;
  TOH(disk - 1, start, mid, end);
  cout << disk << " : "<< start << " => " << end << nl;
  TOH(disk - 1, mid, end, start);
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  TOH(n, 'A', 'C', 'B');

  return 0;
}