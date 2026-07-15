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

void print(map<int, int> mp)
{
    for(auto [x, y] : mp)
    {
        cout << x << ' ' << y << nl;
    }
    cout << nl << string(20, '-') << nl;
}

void solve()
{
    int n; cin >> n;
    map<int, int> mp;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	mp[x]++;
    }

    if(mp.size() == 1) 
    {
        cout << "YES\n";
        return;
    }
    else if(mp.size() > 2) 
    {
        cout << "NO\n";
        return;
    }
    else
    {
        int p, q;
        for(auto [x, y] : mp)
        {
            p = y;
            break;
        }
        for(auto [x, y] : mp)
        {
            v.push_back(x);
        }
        if(n % 2 == 0)
        {
            if(mp[v[0]] == mp[v[1]]) cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if((mp[v[0]] == (mp[v[1]] + 1)) or ((mp[v[0]] + 1) == mp[v[1]])) cout << "YES\n";
            else cout << "NO\n";
        }
    }
   
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