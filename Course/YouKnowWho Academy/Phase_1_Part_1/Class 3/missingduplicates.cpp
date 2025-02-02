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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        unique(v.begin(), v.end());
        // for(int i=0; i<n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        int mx = *max_element(v.begin(), v.end());
        int index;
        for(int i=0; i<n; i++)
        {
            if(mx == v[i])
            {
                index = i;
                break;
            }
        }
        index++;
        cout<<(n-index)<<nl;

    }
    return 0;
}