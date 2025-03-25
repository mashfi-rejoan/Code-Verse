#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while(ss >> word)
    {
    	mp[word]++;
    }

    for(auto m : mp)
    {
    	cout << m.F << ' ' << m.S << nl;
    }


    return 0;
}