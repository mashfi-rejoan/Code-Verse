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
#define trace(x) cout << #x << ": " << x << ' \n';


struct Trie 
{
  Trie* child[2];
  Trie() {
    child[0] = child[1] = nullptr;
  }
};

void insert(Trie* root, int num) {
  Trie* node = root;
  for (int i = 31; i >= 0; i--) {
    int bit = (num >> i) & 1;
    if (!node->child[bit]) {
      node->child[bit] = new Trie();
    }
    node = node->child[bit];
  }
}

int query(Trie* root, int num) {
  Trie* node = root;
  int mx_xor = 0;
  for (int i = 31; i >= 0; i--) {
    int bit = (num >> i) & 1;
    int opposite = 1 - bit;
    if (node->child[opposite]) {
      mx_xor = mx_xor | (1 << i);
      node = node->child[opposite];
    }
    else {
      node = node->child[bit];
    }
  }
  return mx_xor;
}

int max_subarray_xor(vector<int> &a, int n) {
  Trie* root = new Trie();
  insert(root, 0);

  int prefix_xor = 0, ans = 0;

  for (int i = 0; i < n; i++) {
    prefix_xor ^= a[i];
    ans = max(ans, query(root, prefix_xor));
    insert(root, prefix_xor);
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << max_subarray_xor(a, n) << nl;

  return 0;
}