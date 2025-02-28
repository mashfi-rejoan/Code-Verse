#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10); 
    pq.push(5); 
    pq.push(7); 
    pq.push(3); 
    pq.push(9); 
    pq.push(50); 

    cout << pq.top() << nl;

    while(!pq.empty())
    {
        cout << pq.top() << nl;
        pq.pop();
    }

    return 0;
}