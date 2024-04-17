#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node * next;

        Node(int value){
            this->value = value;
            this->next = NULL;
        }
};
void reverse_print_list(Node * n){
        if(n == NULL){
            return;
        }
        reverse_print_list(n->next);
        cout<<n->value<<" "<<endl;
       
}

int main(){

   Node * head = new Node (5); 
   Node * a = new Node (10); 
   Node * b = new Node (20); 
   Node * c = new Node (30); 
  

   head->next = a; 
   a->next = b;
   b->next = c;
   c->next = NULL; 
    

   reverse_print_list(head);   

   return 0;
}