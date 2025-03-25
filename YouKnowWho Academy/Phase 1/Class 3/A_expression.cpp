#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{ 
	int a, b, c; cin >> a >> b >> c;
	vector<int>v(8);
	v[0] = a+b+c;
	v[1] = a*b*c;
	v[2] = a*(b+c);
	v[3] = (a+b)*c;
	// v[4] = a*b+c;
	// v[5] = a+b*c;
	// v[6] = (a*b)+c;
	// v[7] = a+(b*c);

	int mx = *max_element(v.begin(), v.end());
	cout<<mx<<nl;
	return 0;
}