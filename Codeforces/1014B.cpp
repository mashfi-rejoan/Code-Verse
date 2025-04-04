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
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;

    int cnt_a1 = 0, cnt_b0 = 0;
    int ae1 = 0, ao1 = 0;
    int be0 = 0, bo0 = 0;

    for(int i = 0; i < n; i++)
    {
    	if(i % 2 == 0 and a[i] == '1') ae1++;
    	else if(i % 2 != 0 and a[i] == '1') ao1++;

    	if(i % 2 == 0 and b[i] == '0') be0++;
    	else if(i % 2 != 0 and b[i] == '0') bo0++;
    }

    if(ae1 <= bo0 and ao1 <= be0) cout << "YES\n";
    else cout << "NO\n";
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