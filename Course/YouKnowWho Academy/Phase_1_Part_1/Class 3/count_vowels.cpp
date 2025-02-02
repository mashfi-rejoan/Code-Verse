#include<bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;

int cnt;
int i;
int len;
void count_vowels(string s, int i)
{
    if(i==len)
    {
        cout<<cnt<<nl;
        return;
    }
    else
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            cnt++;
        }
        ++i;
        count_vowels(s, i);
    }
}

int main()
{
    string s;
    getline(cin, s);
    len = s.size();
    count_vowels(s, i);

    return 0;
}