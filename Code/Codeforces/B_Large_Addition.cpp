#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    string s; cin>>s;
    int sz = s.size();
    sz--;

    bool flag = true;
    if(s[0]!='1') flag = false;
    if(s[sz]=='9') flag = false;
    for(int i=1; i<sz; i++)
    {
        if(s[i]=='0')
        {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";

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
