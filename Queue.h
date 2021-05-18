#include "Node.h"
#ifndef Queue_h
#define Queue_h
class Queue{
  private:
  Node* head;
  Node* tail;
  int size;
  public:
  Queue();
  ~Queue();
  void enqueue(Node*);
  void dequeue();
  void show_queue();
};
Queue::Queue(){
  head = NULL;
  tail = NULL;
  size = 0;
  cout << "Queue is created.\n"; 
}
Queue::~Queue(){
  while(size) this->dequeue();
  cout << "Queue is deleted.\n";
}
void Queue::enqueue(Node* inserted){
  if(head==NULL){
    head = inserted;
  }
  else{
    tail->insert_next(inserted);
  }
  tail = inserted;
  size++;
}
void Queue::dequeue(){
  if(size>0){
    Node* temp = head;
    head = temp->move_next();
    if(size==1) tail = NULL;
    size--;
    delete temp;
  }
  else{
    cout << "No Queue.\n";
  }
}
void Queue::show_queue(){
  if(size==0){
    cout << "No Queue.\n";
    return;
  }
  Node* temp = head;
  while(temp!=NULL){
    temp->show_data();
    temp = temp->move_next();
  }
}
#endif