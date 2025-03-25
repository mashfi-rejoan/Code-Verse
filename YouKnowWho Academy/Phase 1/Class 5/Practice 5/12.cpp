#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

bool is_valid(char open, char close)
{
    if(open == '(') return close == ')';
    else if(open == '{') return close == '}';
    else return close == ']';
}

void solve()
{
    string s; cin >> s;
    stack<char> st;
    for(auto c : s)
    {
        if(c == '(' or c == '{' or c == '[')
        {
            st.push(c);
        } 
        else 
        {
            if(st.empty())
            {
                cout << "NO\n";
                return;
            }
            else
            {
                char close = c;
                char open = st.top();
                st.pop();
                if(!is_valid(open, close))
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}