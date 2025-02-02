#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int count_down(int n)
{
    if(n==0)
    {
        cout<<"0 : Base case"<<nl;
    }
    else
    {
        cout<<n<<nl;
        count_down(n-1);
        cout<<n<<nl;
    }
}

int main()
{
    int n; cin>>n;
    count_down(n);
    return 0;
}