/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    set<int> se;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        se.insert(v[i]);
    }
    if((int)se.size() == 1) {
        cout << "NO\n";
        return;
    }
    int mx = *max_element(all(v));
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
        if(v[i] == mx) cout << 1 << ' ';
        else {
            cout << 2 << ' ';
        }
    }
    cout << nl;

}

int32_t main()
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