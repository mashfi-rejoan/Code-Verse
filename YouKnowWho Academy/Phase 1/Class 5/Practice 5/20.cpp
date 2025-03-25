#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int n; cin >> n;
    cin.ignore();
    vector<pair<int, string>> vp;
    for(int i = 0; i < n; i++)
    {
    	string s, name, age_in_string; int age;
    	getline(cin, s);
    	int len = s.size();
    	age_in_string = s.substr(len - 4);
    	age = stoi(age_in_string);
    	name = s.substr(0, len - 5);
    	vp.push_back(make_pair(age, name));
    }
    sort(vp.rbegin(), vp.rend());
    // sort(all(vp), greater<pair<int, string>>());
    // sort(all(vp));
    for(int i = 0; i < n; i++)
    {
    	cout << vp[i].S << nl;
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