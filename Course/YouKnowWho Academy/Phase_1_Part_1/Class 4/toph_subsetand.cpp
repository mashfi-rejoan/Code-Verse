#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    int res;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    res = v[0];
    for(int i = 1; i < n; i++)
    {
    	res = res & v[i];
    }
    if(res < k) cout << "YES\n";
    else cout << "NO\n";
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}