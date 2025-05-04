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
    string s; cin >> s;
    int direction = 0;
    for(auto c : s)
    {
    	if(c == '0') direction++;
    	else direction--;
    	direction %= 4;
    	if(direction < 0) direction = (direction + 4) % 4;
    }
    if(direction == 0) cout << "E";
    else if(direction == 1) cout << "S";
    else if(direction == 2) cout << "W";
    else cout << "N";

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