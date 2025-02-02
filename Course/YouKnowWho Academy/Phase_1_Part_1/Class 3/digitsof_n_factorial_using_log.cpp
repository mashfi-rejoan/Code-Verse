#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
   
   int n; cin >> n;
   double sum=0;
   for(int i=1; i<=n; i++)
   {
      sum+= log10(i);
   }
   cout<<floor(sum)+1<<nl;
   return 0;
}