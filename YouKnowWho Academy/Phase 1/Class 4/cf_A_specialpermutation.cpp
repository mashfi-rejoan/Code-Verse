#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	cout << n;
    	for(int i = 1; i < n; i++)
    	{
    		cout << " " << i;
    	}
    	cout << nl;
    }
    return 0;
}