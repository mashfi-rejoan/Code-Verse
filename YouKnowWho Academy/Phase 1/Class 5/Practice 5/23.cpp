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



// void solve()
// {
//     int n; cin >> n;
//     deque<int> dq(n);
//     for(int i = 0; i < n; i++)
//     {
//     	dq[i] = i + 1;
//     }

//     for(int i = 0; i < n; i++)
//     {
//     	// if(i % 2 == 0)
//     	// {
//     	// 	cout << dq.front() << ' ';
//     	// 	dq.pop_front();
//     	// }
//     	// else
//     	// {
//     	// 	cout << dq.back() << ' ';
//     	// 	dq.pop_back();
//     	// }
//     }
//     cout << nl;
// }

void solve()
{
    int n; cin >> n;
    deque<int> a, r;
    for(int i = 0; i < n; i++)
    {
    	r.push_back(i + 1);
    }

    for(int i = 0; i < n; i++)
    {
    	if(!a.empty())
    	{
    		int last_element = a.back();
    		a.push_front(last_element);
    		a.pop_back();
    	}

    	int last_element = r.back();
    	a.push_front(last_element);
    	r.pop_back();
    }

    for(auto u : a)
    {
    	cout << u << ' ';
    }

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