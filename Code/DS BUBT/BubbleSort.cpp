#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void BubbleSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++)
	{
		bool isSwap = false;

		for(int j = 0; j < (n - i - 1); j++)
		{
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);

				isSwap = true;
			}
		}

		if(!isSwap) return;
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

    BubbleSort(a, n);
    print(a, n);

    return 0;
}