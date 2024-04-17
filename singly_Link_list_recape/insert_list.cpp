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
void insert (Node * head, int ind, int value){

       Node * newNode =  new Node (value);
        Node * temp = head;
        
        for(int i = 1; i<=ind - 1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
}
void insert_head (Node * &head, int value){

        Node * newNode = new Node(value);

        newNode->next = head;

        head = newNode;

}
void insert_tail(Node * &head , Node * &tail, int value){
        
        Node * newNode = new Node (value);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
}
int main(){
   Node * head = new Node (5); 
   Node * a = new Node (10); 
   Node * b = new Node (20); 
   Node * c = new Node (30); 
   Node * tail = c;
   head->next = a; 
   a->next = b;
   b->next = c;
   c->next = NULL;  //Optional

   

   print_list(head); 
   cout<<"Tail: "<<tail->value;
   cout<<endl;
   int pos, value;
   cout<<"Enter Pos"<<endl;
   cin>>pos>>value;

   if(size(head) < pos){
        cout<<"Invalid Position"<<endl;
   }else if(pos == 0){
        insert_head(head, value);
   }else if(pos == size(head)){
        insert_tail(head,tail,value);
   }
   
   else{
        insert(head,pos,value); 
       

   }
    print_list(head); 
    cout<<"Tail: "<<tail->value;
    cout<<endl;
   return 0;
}