#include<bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;

int reverse_print_even_indices(int a[], int n)
{
    if(n<0) return 0;
    if(n==0) {
        cout<<a[n]<<" ";
        return 0;
    }
    else if(n%2==0)
    {
        cout<<a[n]<<" ";
        reverse_print_even_indices(a, n-2);
    }
    else
    {
        reverse_print_even_indices(a, n-1);
    }
}

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    reverse_print_even_indices(a, n-1);
    return 0;
}