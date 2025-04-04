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

int n;
vector<int> v;

int Lower_Bound(int x)
{
	int l = 0, r = n - 1;
	int lb = -1;
	while(l <= r)
	{
		int mid = l + (r - l) / 2;
		if(v[mid] == x)
		{
			lb = mid;
			r = mid - 1;
		}
		else 
		{
			l = mid + 1;
		}
	}
	return lb;
}

int Upper_Bound(int x)
{
	int l = 0, r = n - 1;
	int ub = -1;
	while(l <= r)
	{
		int mid = l + (r - l) / 2;
		if(v[mid] > x)
		{
			ub = mid;
			r = mid - 1;
		}
		else 
		{
			l = mid + 1;
		}
	}
	return ub;
}

int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int x; cin >> n >> x;
   v.resize(n);
   for(int i = 0; i < n; i++)
   {
   	cin >> v[i];
   }
   sort(all(v));
   int lb = Lower_Bound(x);
   cout << lb << nl;
   int ub = Upper_Bound(x);
   cout << ub << nl;
   
   auto it1 =  lower_bound(all(v), x);
   cout << (it1 - v.begin()) << nl; 

   auto it2 = upper_bound(all(v), x);
   cout << it2 - v.begin() << nl;

   int count_of_x = (it2 - it1);
   cout << count_of_x << nl;
   return 0;
}