// Dequeue in C++

#include <iostream>
using namespace std;

#define MAX 10

class Dequeue {
  int array[MAX];
  int front;
  int rear;
  int size;

   public:
   Dequeue(int size) {
    front = -1;
    rear = 0;
    this->size = size;
  }

  void infront(int key);
  void inrear(int key);
  void delfront();
  void delrear();
  bool isFull();
  bool isEmpty();
  int getFront();
  int getRear();
};

bool Dequeue::isFull() {
  return ((front == 0 && rear == size - 1) ||
      front == rear + 1);
}

bool Dequeue::isEmpty() {
  return (front == -1);
}

void Dequeue::infront(int key) {
  if (isFull()) {
    cout << "Overflow\n"
       << endl;
    return;
  }

  if (front == -1) {
    front = 0;
    rear = 0;
  }

  else if (front == 0)
    front = size - 1;

  else
    front = front - 1;

  array[front] = key;
}

void Dequeue ::inrear(int key) {
  if (isFull()) {
    cout << " Overflow\n " << endl;
    return;
  }

  if (front == -1) {
    front = 0;
    rear = 0;
  }

  else if (rear == size - 1)
    rear = 0;

  else
    rear = rear + 1;

  array[rear] = key;
}

void Dequeue ::delfront() {
  if (isEmpty()) {
    cout << "Queue Underflow\n"
       << endl;
    return;
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (front == size - 1)
    front = 0;

  else
    front = front + 1;
}

void Dequeue::delrear() {
  if (isEmpty()) {
    cout << " Underflow\n"
       << endl;
    return;
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (rear == 0)
    rear = size - 1;
  else
    rear = rear - 1;
}

int Dequeue::getFront() {
  if (isEmpty()) {
    cout << " Underflow\n"
       << endl;
    return -1;
  }
  return array[front];
}

int Dequeue::getRear() {
  if (isEmpty() || rear < 0) {
    cout << " Underflow\n"
       << endl;
    return -1;
  }
  return array[rear];
}

int main() {
  Dequeue dque(3);

  cout << "insert element at rear end \n";
  dque.inrear(4);
  dque.inrear(13);

  cout << "rear element: "
     << dque.getRear() << endl;

  dque.delrear();
  cout << "after deletion, new rear element: " << dque.getRear() << endl;
  cout << "insert element at front\n";

  dque.infront(8);

  cout << "front element: " << dque.getFront() << endl;

  dque.delfront();

  cout << "new front element: " << dque.getFront() << endl;
}
