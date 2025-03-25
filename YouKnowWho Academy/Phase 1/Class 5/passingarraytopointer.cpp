#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void increase(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i]++;
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    } 

    increase(a, n);
    for(int i = 0; i < n; i++)
    {
    	cout << a[i] << ' ';
    } 

    return 0;
}


