#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
ll ways;
void go(int s, int e)
{
	if(s>e) return;
	if(s==e)
	{
		ways++;
		return;
	}
	go(s+1, e);
	go(s+2, e);
	go(s+3, e);
}
int main()
{
	int s, e; cin>>s>>e;
	go(s,e);
	cout<<ways<<nl;
	return 0;
}