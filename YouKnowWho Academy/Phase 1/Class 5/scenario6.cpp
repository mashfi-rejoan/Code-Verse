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
    set<int> st;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	v.push_back(x);
    } 

    for(int i = 0; i < n; i++)
    {
    	st.insert(v[i]);
    	cout << st.size() << nl;
    }

    return 0;
}