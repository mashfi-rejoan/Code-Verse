#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

void print(queue<int> q)
{
	while(!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    } 

    queue<int> q;
    int sum = 0;
    for(int i = 0; i < k; i++)
    {
    	sum += a[i];
    	q.push(a[i]);
    }
// cout << a[7] << nl;
    for(int i = k; i <= n; i++)
    {
    	// cout << i << nl;
    	print(q);
    	cout << sum << '\n';
    	sum -= q.front();
    	q.pop();
    	if(i < n)
    	{
    		q.push(a[i]);
    		sum += a[i];
    	}
    }

    // print(q);
    // cout << sum << nl;



    return 0;
}