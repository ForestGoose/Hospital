#ifndef Node_h
#define Node_h
class Node{
  private:
  int data;
  Node* next;
  public:
  Node(int);
  ~Node();
  void show_data();
  Node* move_next();
  void insert_next(Node*);
};
Node::Node(int d){
  data = d;
  next = NULL;
  cout <<"Data: " <<data <<" is created." <<endl;
}
Node::~Node(){
  cout <<"Data: "<<data <<" is deleted." <<endl; 
}
void Node::show_data(){
  cout <<"Data: "<< data<< endl;
}
Node* Node::move_next(){
  return next;
}
void Node::insert_next(Node* inserted){
  next = inserted;
}
#endif