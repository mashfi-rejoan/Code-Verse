#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> d;
    d.push_back(10); 
    d.push_back(20); 
    d.push_back(30); 
    d.push_back(40); 
    d.push_back(50); 
    d.push_back(600); 

    d.push_front(5);
    d.push_front(7);

    d.pop_back();
    d.pop_back();
    d.pop_front();
    for(auto x : d)
    {
    	cout << x << ' ';
    }

    cout << nl << d[2] << nl;

    return 0;
}