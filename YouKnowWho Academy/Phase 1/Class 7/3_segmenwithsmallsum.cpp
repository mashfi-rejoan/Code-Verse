//binary search technique
// /*  
//   In the name of Allah, the Most Gracious, the Most Merciful.  
// */

// #include<bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define int long long int
// #define all(x) x.begin(), x.end()
// #define allr(x) x.rbegin(), x.rend()
// #define print(x) for(auto u : x) cout << u << ' '

// const int N = 1e5 + 9;
// int a[N], prefix[N];
// int n, s;

// bool is_ok (int x) {
//   for (int i = x; i <= n; i++) {
//     if(prefix[i] - prefix[i - x] <= s) return true;
//   } 
//   return false;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   cin >> n >> s;
//   for (int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   for (int i = 1; i <= n; i++) {
//     prefix[i] = prefix[i - 1] + a[i];
//   }
//   // for (int i = 1; i <= n; i++) {
//   //   cout << prefix[i] << ' ';
//   // }
//   // cout << nl;

//   int l = 1, r = n, ans = 0;
//   while (l <= r) {
//     int mid = l + (r - l) / 2;
//     if(is_ok(mid)) {
//       ans = mid;
//       l = mid + 1;
//     }
//     else {
//       r = mid - 1;
//     }
//   }
//   cout << ans << nl;

//   return 0;
// }



//two pointer technique
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

const int N = 1e5 + 9;
int a[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s; cin >> n >> s;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }  
  int r = 1, sum = 0, ans = 0;
  for (int l = 1; l <= n; l++) {
    while(r <= n and sum + a[r] <= s) {
      sum += a[r];
      r++;
    }
    ans = max(ans, r - l);
    sum -= a[l];
  }
  cout << ans << nl;

  return 0;
}