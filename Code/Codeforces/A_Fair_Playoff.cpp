#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n = 4;
       vector<int>v(n);
       for(int i=0; i<n; i++)
       {
         cin>>v[i];
       }
       int mx1, mx2, mn1, mn2;
       mx1 = max(v[0], v[1]); 
       mn1= min(v[0], v[1]);

       mx2 = max(v[2], v[3]); 
       mn2= min(v[2], v[3]);

       if(mx1>=mn2 && mx2>=mn1) cout<<"YES\n";
       else cout<<"NO\n";
    }
}