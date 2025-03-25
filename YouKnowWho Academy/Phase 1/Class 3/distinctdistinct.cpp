#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x; cin>>x;
    ll cnt=0;
    for(int i = 1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(i == x/i) cnt++;
            else cnt+=2;
        }
        

    }

    cout<<cnt<<nl;
    return 0;
}