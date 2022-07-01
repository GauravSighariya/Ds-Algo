#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node* prev;

  node(int x){
    data = x;
    next = nullptr;
    prev = nullptr;
  }
};
int main(){
  node* head = new node(1);
  node* temp = head;
  for(int i=0;i<3;i++){
    node* n = new node(i);
    temp->next = n;
    temp = temp->next;

    while(temp){
      cout<<temp->data;
      temp = temp->next;
    }
    
  }
  
  
  
}
