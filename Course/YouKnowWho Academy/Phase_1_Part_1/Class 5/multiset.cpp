#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print(multiset<int> ms)
{
	cout << "multiset = ";
	for(auto x : ms)
    {
    	cout << x << ' ';
    }

    cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    multiset<int> ms;
    ms.insert(10);
    ms.insert(4);
    ms.insert(6);
    ms.insert(7);
    ms.insert(18);
    ms.insert(9);
    ms.insert(18);
    ms.insert(18);
    ms.insert(6);

    print(ms);

    cout << ms.count(18) << nl;

    auto it = ms.find(18);
    ms.erase(it);
    print(ms);

    return 0;
}