#include<bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;
int mx_value = INT_MIN;
int mx(int a[], int n)
{
    if(n<0) return mx_value;
    else
    {
        if(a[n]>mx_value)
        {
            mx_value = a[n];
            --n;
            mx(a, n);
        }
        else
        {
            --n;
            mx(a, n);
        }
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
--n;
int m = mx(a, n);
    cout<<m<<nl;
    return 0;
}