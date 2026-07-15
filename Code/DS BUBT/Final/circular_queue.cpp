#include<bits/stdc++.h>
using namespace std;

#define nl '\n';
const int N = 1e5;
int Queue[N];

int n;
int front = -1, rear = -1;

void enqueue (int x) {
  if (front == -1 and rear == -1) {
    front = rear = 0;
  }
  else if ((rear + 1) % n == front) {
    cout << "Overflow" << nl;
    // front = rear = -1;
  }
  else rear = (rear + 1) % n;
  Queue[rear] = x;
}

void dequeue () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty, Can't delete." << nl;
  }
  else if (front == rear) {
    front = rear = -1;
  }
  else front = (front + 1) % n;
}

void peek () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty." << nl;
  }
  else {
    cout << Queue[front] << nl;
  }
}

void display () {
  if (front == -1 and rear == -1) {
    cout << "Queue is empty." << nl;
  }
  else {
    while(front != rear) {
      cout << Queue[front] << ' ';
      front = (front + 1) % n;
    }
    cout << Queue[rear] << nl;
  }
} 

int32_t main() 
{
  n = 5;

  enqueue(5);
  enqueue(10);
  peek();
  dequeue();
  peek();
  peek();
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  dequeue();
  dequeue();
  display();

  return 0;
}