#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int

const int N = 1e5;
int Stack[N];
int curr = -1;
int n;

void push (int x) {
  if(curr == n) cout << "Overflow\n";
  else {
    curr++;
    Stack[curr] = x;
  }
}

void pop () {
  if (curr < 0) {
    cout << "Stack is empty\n";
    curr = -1;
  }
  else curr--;
}

void top () {
  if (curr < 0) {
    cout << "Stack is empty\n";
    curr = -1;
  }
  else {
    cout << Stack[curr] << nl;
  }
}

void display () {
  if (curr < 0) {
    cout << "Stack is empty\n";
    curr = -1;
  }
  else {
    for (int i = 0; i <= curr; i++) {
      cout << Stack[i] << ' ';
    }
    cout << nl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  n = 5;
  push(2);
  top();
  push(3);
  top();
  display();
  pop();
  display();
  pop();
  pop();

  return 0;
}