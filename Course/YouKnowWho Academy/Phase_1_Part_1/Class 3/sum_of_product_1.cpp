#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        int consecutive_ones = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == 1) consecutive_ones++;
            else consecutive_ones = 0;

            ans += consecutive_ones;
        }
        cout << ans << nl;

    }
    return 0;
}