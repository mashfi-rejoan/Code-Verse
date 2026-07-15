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
    int aliceA, aliceB, bobC, bobD; cin >> aliceA >> aliceB >> bobC >> bobD;
    int mn = min(aliceA, aliceB);
    int mx = max(aliceA, aliceB);
    bool flag1 = false, flag2 = false;
    int x;
    for(int i = mn; i <= mx; i++)
    {
    	if(i == bobC)
    	{
    		flag1 = true;
    		x = bobD;
    		break;
    	}
    	else if(i == bobD)
    	{
    		flag1 = true;
    		x = bobC;
    		break;
    	}
    }
    int cnt = (12 - mx + 1) + mn;
    // cout << cnt << nl;
    while(cnt--)
    {

    	if(mx > 12) 
    	{
    		mx -= 12;
    		if(mx == x)
    		{
    			flag2 = true;
    			break;
    		}

    	}
    	else
    	{
    		if(mx == x)
    		{
    			flag2 = true;
    			break;
    		}
    	}
    	mx++;
    }

    if(flag1 and flag2) 
    {
    	cout << "YES\n";
    }
    else
    {
    	cout << "NO\n";
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