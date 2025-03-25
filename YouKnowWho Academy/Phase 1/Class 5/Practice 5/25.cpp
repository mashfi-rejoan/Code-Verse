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

stack<int> st;

void solve()
{
    int ty, id; cin >> ty;;
    
    if(ty == 1)
    {
    	cin >> id;
    	st.push(id);
    }
    else if(ty == 2 and !st.empty())
    {
    	st.pop();
    }
    else 
    {
    	if(!st.empty())
    	{
    		cout << st.top() << nl;
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