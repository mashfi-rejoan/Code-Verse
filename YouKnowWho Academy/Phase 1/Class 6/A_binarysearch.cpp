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

vector<int> v;
int item;

void print(vector<int> v)
{
	for(auto u : v)
	{
		cout << u << ' ';
	}
	cout << nl;
}

bool search(int l, int r)
{
	while(l <= r)
	{
		if(l > r) return false;
		int mid = (l + r) / 2;
		if(item == v[mid]) return true;
		else if(item > v[mid]) 
		{
			l = mid + 1;
		}
		else 
		{
			r = mid - 1;
		}
	}
	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, q; cin >> n >> q;
	v.resize(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	while(q--)
	{
		cin >> item;
		// cout << item << nl;
		bool is_found = search(0, n-1);	
		if(is_found) cout << "YES\n";
		else cout << "NO\n";
	}
		// print(v);
	return 0;
}