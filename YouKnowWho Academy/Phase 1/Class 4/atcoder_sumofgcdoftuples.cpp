#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k; cin >> k;
    ll sum = 0;
    for(int a = 1; a <= k; a++)
    {
    	for (int b = 1; b <= k; b++)
    	{
    		for(int c = 1; c <= k; c++)
    		{
    			sum += __gcd(a, __gcd(b, c));
    		}
    	}
    }
    cout << sum << nl; 

    return 0;
}