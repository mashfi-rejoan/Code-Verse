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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<vector<int>> a(n, vector<int> (n));
    vector<int> v;
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		a[i][j] = (i + 1) * (j + 1);
    		// cout << a[i][j] << ' ';
    		v.push_back(a[i][j]);
    	}
    	// cout << nl;
    }  
    sort(all(v));
    int mid = (int)((int)v.size() - 1) / 2;
    cout << v[mid] << nl;

    return 0;
}