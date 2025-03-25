#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // string s = "10 12 45   654 9846 654            64846 654";
    // stringstream ss(s);
    // cout << ss.str() << nl;

    // int n;
    // while(ss >> n)
    // {
    // 	cout << n << nl;
    // }

    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
    	cout << word << nl;
    }


    return 0;
}