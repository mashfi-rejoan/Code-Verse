#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> mp;
    string s; 
    while(getline(cin, s))
    {
        string a, b;
        if(find(s.begin(), s.end(), ' ') != s.end())
        {
            stringstream ss(s);
            ss >> a; ss >> b;
            mp[b] = a;
        }
        else 
        {
            if(!s.empty())
            {
                if(mp.find(s) != mp.end())
                {
                    cout << mp[s] << nl;
                }
                else cout << "eh\n";
            }
        }
    } 


    return 0;
}