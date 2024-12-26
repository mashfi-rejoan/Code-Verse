#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int operation;
vector<int>memo(100, -1);

ll power_of_two(int n)
{
    if(memo[n] != -1) return memo[n];
    
operation++;
    if(n==0) return 1;
    
    memo[n] = power_of_two(n-1) + power_of_two(n-1);
    return memo[n];
}

int main()
{
    int n; cin>>n;
    cout<<power_of_two(n)<<nl;
    cout<<operation<<nl;
    return 0;
}