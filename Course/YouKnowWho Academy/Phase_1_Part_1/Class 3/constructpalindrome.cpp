#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<int>v(26,0);
    for(int i=0; i<n; i++)
    {
        int x = s[i] - 'a';
        v[x]++;
    }
    int cnt=0;
    for(int i=0; i<26; i++)
    {
        if(v[i] % 2 != 0) cnt++;
    }
    cnt--;
    if(k>=cnt) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}