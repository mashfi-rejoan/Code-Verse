#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
   
   int t; cin>>t;
   while(t--)
   {
      int n; cin>>n;
      vector<int>v(n);
      double sum = 0;
      for(int i=0; i<n; i++)
      {
         cin>>v[i];
         sum+=v[i];
      }
      double mx = *max_element(v.begin(), v.end());
      sum-=mx;
      double s2_avg = (double)sum/(double)(n-1);
      double avg = (double)mx + s2_avg;
      cout << fixed << setprecision(9) <<avg<<nl;
   }
   return 0;
}