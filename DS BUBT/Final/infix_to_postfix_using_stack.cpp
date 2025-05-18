#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

int precedence(char ch) {
  if(ch == '+' or ch == '-') return 1;
  else if (ch == '*' or ch == '/') return 2;
  else if (ch == '^') return 3;
  return 0;
}

string infix_to_postfix (string eq) {
  stack<char> op;
  string postfix = "";
  for (auto ch : eq) {
    if (isalpha(ch)) {
      postfix += ch;
    }
    else if (ch == '(') {
      op.push('(');
    }
    else if (ch == ')') {
      while(!op.empty() and op.top() != '(') {
        postfix += op.top();
        op.pop();
      }
      if(op.top() == '(') op.pop();
    }
    else {
      while (!op.empty() and precedence(op.top()) >= precedence(ch) and op.top() != '(') {
        postfix += op.top();
        op.pop();
      }
      op.push(ch);
    }
  }
  while(!op.empty()) {
    postfix += op.top();
    op.pop();
  }
  return postfix;
}

int32_t main() 
{
  string equation; cin >> equation;
  string postfix = infix_to_postfix(equation);
  cout << postfix << nl;

  return 0;
} 