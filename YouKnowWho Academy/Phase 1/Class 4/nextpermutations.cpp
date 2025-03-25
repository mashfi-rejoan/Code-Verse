#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    do
    {
        for(auto u : v)
        {
        cout << u << " ";
        }
        cout << nl;
    } while(next_permutation(v.begin(), v.end()));
    
    return 0;
}