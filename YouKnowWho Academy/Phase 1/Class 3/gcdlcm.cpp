#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int g, l; cin>>g>>l;
        if(l%g!=0) cout<<-1<<nl;
        else cout<<g<<" "<<l<<nl;
        
    }
    return 0;
}