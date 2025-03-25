#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    while(true)
    {
        int a, b, c; cin >> a >> b >> c;

        if(a == 0 and b == 0 and c == 0) break;
        
        int x, y;
        x = b - a;
        y = c - b;
        if(x==y) cout<<"AP "<<(c+x)<<nl;
        else
        {
            int p = b / a;
            int d = c * p;
            cout<<"GP "<<d<<nl;
        }
    }
    return 0;
}