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
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;



void solve()
{
    int x, y; cin >> x >> y;
    if(y > x + 1) no;
    else if(y == x + 1) yes;
    else if((y % 9) == ((x % 9) + 1) % 9) yes;
    else no;
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