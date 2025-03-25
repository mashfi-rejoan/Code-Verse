#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	ans ^= x;
    }
    cout << ans << nl; 

    return 0;
}