#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[8] = {3, 7, 2, 4, 8, 1, 9, 0};

//insert 6 before 2
    for(int i = 7; i > 2; i--)
    {
    	a[i] = a[i - 1];
    }
    a[2] = 6;
    for(int i = 0; i < 8; i++)
	{
		cout << a[i] << ' ';
	}
	cout << nl;

//delete 1
    for(int i = 6; i < 7; i++)
    {
    	a[i] = a[i + 1];
    }
    for(int i = 0; i < 7; i++)
	{
		cout << a[i] << ' ';
	}
	cout << nl;
//insert 5 before 1
	for(int i = 7; i > 6; i--)
    {
    	a[i] = a[i - 1];
    }
    a[6] = 5;
    for(int i = 0; i < 8; i++)
	{
		cout << a[i] << ' ';
	}
	cout << nl;

//find index of 8
	int index;
	for(int i = 0; i < 8; i++)
	{
		if(a[i] == 8) {
			index = i;
			break;
		}
	}
	cout << index << nl;
    return 0;
}