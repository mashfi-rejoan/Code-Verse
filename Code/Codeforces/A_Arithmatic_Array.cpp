#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       ll sum=0;
       vector<int>v(n);
       for(int i=0; i<n; i++)
       {
         cin>>v[i];
         sum+=v[i];
       }
       float x = (float)sum/n;
       if(x==1.0) cout<<0<<nl;
       else if(sum<=0 || sum<=n) cout<<1<<nl;
       else cout<<(sum-n)<<nl;
    }
}