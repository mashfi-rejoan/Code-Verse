#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
   
   int t; cin>>t;
   while(t--)
   {
      vector<int>v(26, false);
      int n; cin>>n;
      cin.ignore();
      string s; cin>>s;
      bool is_valid = true;
      for(int i=0; i<n; i++)
      {
         if(v[s[i]-'A'] && s[i]!=s[i-1])
         {
            is_valid = false;
         }
         v[s[i]-'A'] = true;
      }

      is_valid ? cout<<"Yes\n" : cout<<"No\n";
   }
   return 0;
}