#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	
	int t; cin>>t;
	while(t--)
	{
		vector<int>v; 
		int n; cin>>n;
		int power = 1;
		while(n>0)
		{
			if(n%10 > 0)
			{
				v.push_back((n%10)*power);
			}
			n/=10;
			power*=10;
		}
		cout<<v.size()<<nl;
		for(auto ans : v)
		{
			cout<<ans<<" ";
		}
		cout<<nl;

	}
	return 0;
}