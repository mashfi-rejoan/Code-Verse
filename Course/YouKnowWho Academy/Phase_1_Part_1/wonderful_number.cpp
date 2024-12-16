#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n, r, l=0; cin>>n;
    vector<int>bit(64);
    if(n%2==0) 
    {
        cout<<"NO"<<nl;
        return 0;
    }
    else
    {

        for(int k = 0; k<64; k++)
        {
            bit[k] = (n>>k) & 1;
        }

        for(int i = 63; i>=0; i--)
        {
            if(bit[i]==1)
            {
                r=i;
                break;
            }
        }

        while(l<r)
        {
            if(bit[l] != bit[r])
            {
                cout<<"NO"<<nl;
                return 0;
            }
            else
            {
                l++;
                r--;
            }
        }
        cout<<"YES"<<nl;
    }
    return 0;
}