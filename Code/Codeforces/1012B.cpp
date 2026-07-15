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
    int n, m; 
    cin >> n >> m;
    vector<string> v;
    vector<vector<int>> save(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++)
    {
    	string x; cin >> x;
    	v.push_back(x);
    }


    //row wise
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++)
    	{
    		if(v[i][j] == '0') 
    		{
    			break;
    		}
    		else
    		{
    			save[i][j] = 1;
    		}
    	}
    }

    for(int j = 0; j < m; j++)
    {
    	for(int i = 0; i < n; i++)
    	{
    		if(v[i][j] == '0') 
    		{
    			break;
    		}
    		else 
    		{
    			save[i][j] = 1;
    		}
    	}
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(v[i][j] == '1' and save[i][j] == 0) 
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    // cout << string(20, '-') << nl;

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