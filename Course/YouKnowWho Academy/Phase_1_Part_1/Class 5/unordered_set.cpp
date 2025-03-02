#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print(unordered_set<int> us)
{
	cout << "unordered set = ";
	for(auto x : us)
    {
    	cout << x << ' ';
    }

    cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<int> us;
    us.insert(10);
    us.insert(4);
    us.insert(6);
    us.insert(7);
    us.insert(18);
    us.insert(9);
    us.insert(18);
    us.insert(18);
    us.insert(6);

    print(us);

    return 0;
}