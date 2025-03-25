#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    string s; cin >> s;
    vector<int> v;
    for(int i = 0; i < s.size(); i+=2)
    {
        int x = s[i] - '0';
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int n = v.size();
    for(int i = 0; i < n; i++)
    {
        if(i == n-1) cout << v[i] << nl;
        else cout << v[i] << "+";
    }
    return 0;
}