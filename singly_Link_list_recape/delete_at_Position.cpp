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
void print_list (Node * head){

    Node * temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
   }
}

int size(Node *head){
    Node * temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void delete_at_any(Node * head,int  pos){
        Node * temp = head;

        for(int i = 1; i<=pos-1; i++){
            temp = temp->next;
        }

        Node * deleteNode = temp->next;
        temp->next = temp->next->next;
}
void delete_head (Node * &head){
    Node * headDelete = head;
    head = head->next;
    delete headDelete;
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

    print_list(head);

    int pos;
    cin>>pos;
    if(pos >= size(head)){
        cout<<"Invalid Position: ";
    }else if(pos == 0){
        delete_head(head);
    }
    else{
        delete_at_any(head,pos);
    }
    print_list(head);

    return 0;
}