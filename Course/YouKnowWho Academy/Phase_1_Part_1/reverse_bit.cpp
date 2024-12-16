#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(32);
        for(int k=0; k<32; k++)
        {
            v.push_back((n>>k)&1);
        }

        reverse(v.begin(), v.end());
        unsigned int ans=0;
        for(int k=0; k<32; k++)
        {
            if(v[k]&1)
            {
                ans += (1<<k);
            }
        }

        cout<<ans<<nl;
    }
    return 0;
}