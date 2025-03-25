#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e6;
int a[N];
int n;
int i, j;
bool check(int i, int j)
{
    if(i>=j) return true;
    if(a[i] != a[j]) return false;
    else
    {
        i++; j--;
        return check(i, j);
    }
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    i=0; j=n-1;
    if(!check(i, j)) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
    return 0;
}