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
// #define trace(x) cout << #x << ": " << x << " \n";

// const int N = 1e5 + 9;
// int u[N], v[N];
// const int mod = (1LL << 32);
// const int c = 1e5;

// int32_t main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int q, s, a, b; cin >> q >> s >> a >> b;
//   vector<int> vq(q + 5);
//   for (int i = 1; i <= q; i++) {
//     vq[i] = ((a * vq[i - 1] + b) % mod);
//   }
//   // print(vq);
//   int ans = 0;
//   for (int i = 1; i <= q; i++) {
//     if (vq[i] % 2) {
//       int x = vq[i] / 2;
//       if (x <= c and u[x] == 0) {
//         ans += x;
//         u[x]++;
//       }
//       else if (x > c) {
//         int y = x % c;
//         if (v[y] == 0) {
//           ans += x;
//           v[y]++;
//         }
//       }
//     }
//     else {
//         int x = vq[i] / 2;
//         if (x <= c and u[x] != 0) {
//           ans -= x;
//           u[x] = 0;
//         }
//         else if (x > c) {
//           int y = x % c;
//           if (v[y] != 0) {
//             ans -= x;
//             v[y] = 0;
//           }
          
//         }
//     }
//   }
//   cout << ans << nl;

//   return 0;
// }


/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
// #define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";

const unsigned int N = (1u << 31);
bitset<N> isExists;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int q;
  unsigned int s, a, b; 
  cin >> q >> s >> a >> b;
  // set<unsigned int> st;
  long long sum = 0;
  while (q--) {
    if (s & 1) {
      unsigned int x = s / 2;
      // if (st.find(x) == st.end()) {
      //   st.insert(x);
      // }
      if (!isExists[x]) {
        isExists[x] = true;
        sum += x;
      }
    }
    else {
      unsigned int x = s / 2;
      // if (st.find(x) != st.end()) {
      //   st.erase(x);
      // }
      if (isExists[x]) {
        isExists[x] = false;
        sum -= x;
      }
    }
    s = a * s + b;
  }
  cout << sum << nl;

  return 0;
}