#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

int factorial(ll x)
{
	int fact = 1;
	for(int i = 1; i <= x; i++)
	{
		fact *= i;
	}
	return fact;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y; cin >> x >> y;
    int fact = factorial(min(x, y)); 

    cout << fact << nl;

    return 0;
}