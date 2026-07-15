/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;

int precedence(char ch) {
  if (ch == '^') return 3;
  else if (ch == '*' or ch == '/') return 2;
  else if (ch == '+' or ch == '-') return 1;
  else return -1;
}


int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string infix, prefix = ""; cin >> infix;
  reverse(all(infix));
  for (int i = 0; i < sz(infix); i++) {
    if (infix[i] == '(') infix[i] = ')';
    else if (infix[i] == ')') infix[i] = '(';
  }

  stack<char> st;
  for (auto u : infix) {
    if ((u >= 'a' and u <= 'z') or (u >= 'A' and u <= 'Z') or u >= '0' and u <= '9') {
      prefix += u;
    }
    else if (u == '(') st.push('(');
    else if (u == ')') {
      while (!st.empty() and st.top() != '(') {
        prefix += st.top();
        st.pop();
      }
      if (!st.empty()) st.pop();
    }
    else {
      while (!st.empty() and precedence(st.top()) > precedence(u)) {
        prefix += st.top();
        st.pop();
      }
      st.push(u);
    }
  }

  while(!st.empty()) {
    prefix += st.top();
    st.pop();
  }

  reverse(all(prefix));

  // trace(prefix);

  return 0;
}