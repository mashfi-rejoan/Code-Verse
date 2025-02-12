#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    int cnt = 0;
    while(n > 0)
    {
    	n = n / k;
    	// cout << n << nl;
    	cnt++;
    } 
    cout << cnt << nl;
    return 0;
}