#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    vector<int>v(n + 9);
    vector<int>m(n + 9);
    int max_streak = 0; current_streak = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int index;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] <= a[i+1])
        {
            current_streak++;
            if(current_streak > max_streak) index = i+1;
            max_streak = max(max_streak, current_streak);
        }
        else
        {
            current_streak = 0;
            m.push_back(i+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}