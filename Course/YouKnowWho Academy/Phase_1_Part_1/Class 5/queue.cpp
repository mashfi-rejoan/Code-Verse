#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    q.push(10); 
    q.push(30); 
    q.push(40); 
    q.push(50);

    // cout << q.front() << nl;
    // cout << q.back() << nl;

    while(!q.empty())
    {
    	cout << q.front() << nl;
    	q.pop();
    }

    return 0;
}