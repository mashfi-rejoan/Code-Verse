#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void fact(int n)
{
    int f = 1;
    for(int i=1; i<=n; i++)
    {
        f*=i;
    }
    int ans = f%10;
    cout<<ans<<nl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        fact(n);
    }
    return 0;
}