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
void inset_tail(Node * &head, Node * &tail, int value){
        
        Node * newNode = new Node(value); 
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
}

void print_list (Node * head){

    Node * temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
   }
}
int main(){
   Node * head = NULL;
   Node * tail = NULL;
   int value;
   while(true){
        cin>>value;
        if(value == -1){
            break;
        }else {
            inset_tail(head,tail,value);
        }
   }
    print_list(head);
    cout<<endl;
   return 0;
}