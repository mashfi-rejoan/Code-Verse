#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

string t = "aabcabaacbca";
const int n = 3;
int a[n];
int x = 0;

void search_index(string &p)
{
	int text_size = t.size();
	int pattern_size = p.size();
	int max = text_size - pattern_size + 1;
	int found;
	for(int i = 0; i < max; i++)
	{
		int j;
		for(j = 0; j < pattern_size; j++)
		{
			if(t[i + j] != p[j]) break;
		}

		if(j == pattern_size) {
			a[x] = i;
			x++;
		}
	}
}

void SelectionSort(int a[])
{
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

void print(int a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p1 = "bca", p2 = "ba", p3 = "aca"; 

	search_index(p1);
    search_index(p2);
    search_index(p3);
    
    SelectionSort(a);

    print(a);

    return 0;
}