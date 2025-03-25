#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();
    vector<string> vs;
    for(int i = 0; i < n; i++)
    {
    	string s; cin >> s;
    	// vs.push_back(s);
    	// mp[s]++;
    	if(find(all(vs), s) == vs.end()) cout << "NO\n";
    	else cout << "YES\n";
    	vs.push_back(s);
    }

    
    return 0;
}