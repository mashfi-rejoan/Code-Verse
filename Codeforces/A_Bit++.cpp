#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n; cin >> n;
    int p = 0;
    while(n--)
    {
        string s; cin >> s;
        if(s=="++X") ++p;
        else if(s=="X++") p++;
        else if(s=="--X") --p;
        else if(s=="X--") p--;
    }
    cout<<p<<nl;
    return 0;
}