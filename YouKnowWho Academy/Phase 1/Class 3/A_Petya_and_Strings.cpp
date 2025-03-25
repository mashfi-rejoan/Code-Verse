#include<bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    // cout<<a<<nl<<b<<nl;
    if(a<b)
    {
        cout<<-1<<nl;
        return 0;
    }
    if(a>b)
    {
        cout<<1<<nl;
        return 0;
    }
    cout<<0<<nl;

    return 0;
}