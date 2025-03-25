#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 2e5 + 9;
vector<int>v(N);
vector<int>u(N);
vector<ll>p(N);
vector<ll>q(N);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    v.resize(n);
    u.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	u[i] = v[i];
    }

    sort(u.begin(), u.end());

    //prefix sum
    for(int i = 0; i < n; i++)
    {
    	p[i + 1] = p[i] + v[i];
    	q[i + 1] = q[i] + u[i];
    }

    int m; cin >> m;
    while(m--)
    {
    	int x, l, r; cin >> x >> l >> r;
    	if(x == 1) 
    	{
    		cout << p[r] - p[l-1] << nl;
    	}	
    	else 
    	{
    		cout << q[r] - q[l-1] << nl;
    	}
    }

    return 0;
}