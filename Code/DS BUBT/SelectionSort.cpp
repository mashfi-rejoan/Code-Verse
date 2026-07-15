#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void SelectionSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++)
	{
		int mmi = i;
		for(int j = i; j < n; j++)
		{
			if(a[j] < a[mmi]) {
				mmi = j;
			}
		}
		swap(a[i], a[mmi]);
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

    SelectionSort(a, n);
    print(a, n);

    return 0;
}