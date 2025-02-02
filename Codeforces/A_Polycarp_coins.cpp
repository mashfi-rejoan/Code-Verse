#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    int t; cin>>t;
    while(t--)
    {
    	int x; cin>>x;
        if(x==1) cout<<"1 0"<<nl;
        else if(x==2) cout<<"0 1"<<nl;
        else
        {
        	if(x%3==0)
            {
                int r = x/3;
                cout<<r<<" "<<r<<nl;
            }
            else if(x%3==1)
            {
                int r = x/3;
                cout<<(r+1)<<" "<<r<<nl;
            }
            else 
            {
                int r = x/3;
                cout<<r<<" "<<(r+1)<<nl;
            }
        }
    }
    return 0;
}