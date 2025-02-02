#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1; i<=10000; i++)
       {
        if(i%3!=0 && i%10!=3)
        {
            v.push_back(i);
        }
       }
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       n--;
       cout<<v[n]<<nl;

    }
}