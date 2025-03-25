#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    vector<int>v(26, 0);
    for(int i = 0; i < s.size(); i++)
    {
    	int x = s[i] - 'a';
    	v[x]++;
    }

    // for(int i = 0; i < 26; i++)
    // {
    // 	cout << v[i] << nl;
    // }

    int i;
    for(i = 0; i < 26; i++)
    {
    	if(v[i] == 0) 
    	{
    		// cout << v[i] << nl;
    		char ch = i + 97;
    		cout << ch << nl;
    		return 0;
    	}
    }

    if(i == 26) cout << "None\n";


    return 0;
}