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

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5, m = 5;
    int a[6][6];
    int row, col;
    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= m; j++)
    	{
    		int x; cin >> x;
    		a[i][j] = x;
    		if(x == 1)
    		{
    			row = i; col = j;
    		}
    	}
    } 

    int ans = abs(3 - row) + abs(3 - col);
    cout << ans << nl;

    return 0;
}