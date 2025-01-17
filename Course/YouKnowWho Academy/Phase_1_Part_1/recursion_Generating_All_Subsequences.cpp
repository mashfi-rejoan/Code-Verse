#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int n;
vector<int>v;
vector<bool>is_taken;

void gen_subsets(int pos)
{
    if(pos>=n)
    {
        for(int i=0; i<n; i++)
        {
            if(is_taken[i])
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<nl;
        return;
    }
    is_taken[pos] = false;
    gen_subsets(pos+1);

    is_taken[pos] = true;
    gen_subsets(pos+1);

}

int main()
{
    cin>>n;
    v.resize(n);
    is_taken.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    gen_subsets(0);
    return 0;
}