#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, k; cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)

        {
            cout<<abs(v[i]-v[j])<<nl;
            if((abs(v[i]-v[j]))%k!=0)
            {
                cout<<abs(v[i]-v[j])%k<<nl;
                cout<<"Yes"<<nl<<i<<nl;
                return;
            }
        }
    }

    cout<<"No"<<nl;

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}