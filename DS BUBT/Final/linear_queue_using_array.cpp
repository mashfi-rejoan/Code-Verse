#include<bits/stdc++.h>
using namespace std;

#define nl '\n';

const int N = 1e5;
int Queue[N];

int n;
int front = -1, rear = -1;

void enqueue (int x) {
  if(front = rear == -1) {
    front = rear = 0;
  }
  else if (rear > n - 1) {
    front = -1; rear = -1;
    cout << "Overflow" << nl;
  }
  else rear++;
  Queue[rear] = x;
}

void dequeue () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty. Can't delete." << nl;
  }
  else if (front == rear) front = rear = -1;
  else front++;
}

void peek () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty." << nl;
  }
  else cout << Queue[front] << nl;
}

void display () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty." << nl;
  }
  else {
    for(int i = front; i <= rear; i++) {
      cout << Queue[i] << ' ';
    }
    cout << nl;
  }
}

int32_t main() 
{
  n = 5;
  
  enqueue(5);
  enqueue(10);
  // peek();
  dequeue();
  peek();
  dequeue();
  dequeue();
  enqueue(5);
  enqueue(10);
  enqueue(5);
  enqueue(10);
  display();

  return 0;
}