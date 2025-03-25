#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
     vector<int>v(n);
     for(int i = 0; i < n; i++)
     {
       cin >> v[i];
     }
     
     int x; cin >> x;
     int a, b; cin >> a >> b;
     x--; a--; b--;
     v.erase(v.begin() + x);
     v.erase(v.begin() + a, v.begin() + b);
     cout << v.size() << nl;
     for(auto u : v)
     {
     	cout << u << ' ';
     } 
     cout << nl;
    return 0;
}