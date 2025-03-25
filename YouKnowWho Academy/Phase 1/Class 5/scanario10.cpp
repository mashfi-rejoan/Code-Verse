#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

map<int, int> m;

void print(map<int, int> m)
{
	for(auto [x, y] : m)
	{
		cout << x << ' ' << y << nl;
	}

	cout << string(20, '-') << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	string ty; cin >> ty;
    	int x; cin >> x;
    	if(ty == "add")
    	{
    		m[x]++;
    	}
    	else 
    	{
    		if(m.find(x) != m.end())
    		{
    			m[x]--;
    			if(m[x] <= 0) m.erase(x);

    		}
    	}

    	cout << m.size() << ' ';
    	// print(m);
    }

    return 0;
}