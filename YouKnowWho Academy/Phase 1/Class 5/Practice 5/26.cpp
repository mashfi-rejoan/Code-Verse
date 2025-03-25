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
queue<int> q;
void print(queue<int> q)
{
	while(!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << nl << string(20, '-') << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t; cin >> t;
    while(t--)
    {
        // print(q);
        int ty, x; cin >> ty >> x;
        // cout << ty << ' ' << x << nl;
        if(ty == 1) q.push(x);
        else if(ty == 2)
        {
        	if(q.front() == x)
        	{
        		cout << "YES\n";
        		if(!q.empty()) q.pop();
        	}
        	else
        	{
        		cout << "NO\n";
        		if(!q.empty()) q.pop();
        	}
        }
    }

    return 0;
}