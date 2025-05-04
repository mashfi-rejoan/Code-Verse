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

int Search(vector<int> &v, int item)
{
	int l = 0, r = (int)v.size() - 1;
	while(l <= r)
	{
		int mid = l + (r - l) / 2;
		if(v[mid] == item)
		{
			return mid;
		}
		else if (v[mid] > item)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}

	return -1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C = 1;
    while(true)
    {
    	int n, q; cin >> n >> q;

    	if(n == 0 and q == 0) break;
    	else
    	{	
    		cout << "CASE# " << C << ":" << nl;
    		C++;
    		vector<int> v(n);
    		for(int i = 0; i < n; i++)
    		{
    			cin >> v[i];
    		}

    		sort(all(v));
    		// print(v);
    		// cout << nl;

    		while(q--)
    		{
    			int qui; cin >> qui;
    			// cout << qui << nl;

    			if(binary_search(all(v), qui))
    			{
    				auto it = lower_bound(all(v), qui);
	    			auto index = it - v.begin();
	    			index++;
	    			cout << qui << " found at " << index << nl;
    			}
    			else
    			{
    				cout << qui << " not found" << nl;
    			}
    		}
    	}
    } 

    return 0;
}