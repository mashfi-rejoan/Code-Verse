#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        int cnt = 0;
        bool is_broken = false;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                cout << 0 << nl;
                is_broken = true;
                break;
            }
            else if(a[i] < 0) cnt++;
        }

        if(is_broken == false)
        {
            if(cnt % 2 == 0) cout << 0 << nl;
            else cout << 1 << nl;
        }
    }
    return 0;
}