#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       int x; cin>>x;
       int n = 2*x;
       vector<int>v(n);
       int ev=0, odd=0;
       for(int i=0; i<n; i++)
       {
        cin>>v[i];
       } 
       for(int i=0; i<n; i++)
       {
        if(v[i]%2==0) ev++;
        else odd++;
       }
       if(ev==odd) cout<<"Yes\n";
       else cout<<"No\n";
    }
}