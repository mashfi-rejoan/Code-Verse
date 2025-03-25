/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

using namespace std;



void solve()
{
    int n; cin >> n;
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    for(int i = 3; i <= n; i++)
    {
        v.push_back(i);
    }
    for(auto u : v)
    {
        cout << u << ' ';
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