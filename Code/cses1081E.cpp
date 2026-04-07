#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define nl '\n'
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
const int N=5e4+1;
bitset<N>cnt[N];
void solve(){
    int n, m; cin>>n>>m;
    vector<int>dg(n+1, 0), cs[n+1];
    for(int i=0; i<m; i++){
      int u, v; cin>>u>>v;
      cs[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
      for(auto v: cs[i]) dg[v]++;
    }
    queue<int>q;
    for(int i=1; i<=n; i++){
      if(!dg[i]) q.push(i);
      cnt[i][i]=1;
    }

    while(!q.empty()){
      int v=q.front(); q.pop();
      for(auto u: cs[v]){
        cnt[u]|=cnt[v];
        if(--dg[u]==0) q.push(u);
      }
    }
    for(int i=1; i<=n; i++) cout<<cnt[i].count()<<" "; cout<<nl;
}
int32_t main(){
    fast
    int t=1, w=1; 
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}