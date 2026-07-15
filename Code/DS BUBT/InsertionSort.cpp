#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void InsertionSort(int a[], int n) {
	for(int i = 0; i < n; i++)
	{
		int j = i; 
		while(j > 0 and a[j] < a[j - 1])
		{
			swap(a[j], a[j - 1]);
			j--;
		}
	}
}

void print(int a[], int n) {
	for(int i  = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    } 

    InsertionSort(a, n);
    print(a, n);

    return 0;
}