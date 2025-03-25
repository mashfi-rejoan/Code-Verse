#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

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
    int cnt;
    auto it = find(v.begin(), v.end(), 20);
    if(it != v.end()) cnt = count(v.begin(), v.end(), 20);
    cout << cnt << nl;
    for(int i = 0; i < v.size(); i++)
    {
    	cout << v[i] << ' ';
    }




    return 0;
}