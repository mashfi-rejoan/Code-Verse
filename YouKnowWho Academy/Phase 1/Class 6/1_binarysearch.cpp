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

int item;
vector<int> v;

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
	if(l > r) return false;
	int mid = (l + r) / 2;
	if(item == v[mid]) return true;
	else if(item > v[mid]) return search(mid + 1, r);
	else return search(l, mid - 1);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n >> item;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    sort(all(v));
    bool is_found = search(1, n);
    cout << boolalpha << is_found << nl;

    return 0;
}