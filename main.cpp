#include <iostream>
using namespace std;
#include "Node.h"
#include "Queue.h"

int main() {
  Queue q;
  for(int i = 0; i < 4; i++){
    Node* temp = new Node(i);
    q.enqueue(temp);
  }
  q.dequeue();
  q.show_queue();
  cout << "End\n";
}