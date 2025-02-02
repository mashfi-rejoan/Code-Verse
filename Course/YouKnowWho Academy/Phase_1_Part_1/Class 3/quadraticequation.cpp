#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int a, b, c; cin>>a>>b>>c;
    int d = (b*b) - (4*a*c);
    if(d<0) cout<<"No roots\n";
    else if(d==0)
    {
        int x = -b / (2*a);
        cout<<"One root: "<<x<<nl;
    }
    else
    {
        d= sqrt(d);
        int x = (-b + d) / (2*a);
        int y = (-b - d) / (2*a);
        int mx = max(x,y);
        int mn = min(x,y);
        cout<<"Two roots: "<<mn<<" "<<mx<<nl;
    }
    return 0;
}