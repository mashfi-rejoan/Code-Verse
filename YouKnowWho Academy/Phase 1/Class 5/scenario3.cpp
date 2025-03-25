#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    // int bracket = 0;
    // for(int i = 0; i < (int) s.size(); i++)
    // {
    // 	if(bracket < 0) {
    // 		cout << "NO\n";
    // 		return 0;
    // 	}
    // 	if(s[i] == '(') bracket++;
    // 	else if(s[i] == ')') bracket--;
    // } 

    // if(bracket == 0) cout << "YES\n";
    // else cout << "NO\n";

//solve using stack
    stack<char> st;
    for(auto c : s)
    {
        if(c == '(') st.push(c); 
        else {
            if(st.empty()) {
                cout << "NO\n";
                return 0;
            } else {
                st.pop();
            }
        }
    }

    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}