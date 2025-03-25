#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; 
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	v.push_back(x);
    } 

    for(int i = 0; i < n - 1; i++)
    {
    	if(v[i] == v[i + 1] and v[i] == v[i + 2]) 
    	{
    		cout << "Yes\n";
    		return 0;
    	}
    } 

    cout << "No\n";
    return 0;
}