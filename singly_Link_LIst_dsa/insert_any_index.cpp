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
void insert_tail (Node * &head, int val){
        Node * newNode = new Node (val); 
        if(head == NULL){
             head = newNode;
             return;
        }
        Node * tem = head;
        while(tem->next !=NULL){
            tem = tem->next;
        }

        tem->next = newNode;
}
void Print_link_list (Node * head){
        cout<<"Print link list:  ";
        Node * tem = head;
        while(tem !=NULL){
            cout<<tem->value<<" "<<endl;
            tem = tem->next;
        }

        cout<<endl;
}
int main(){

    Node * head = NULL;

    while(true){
        cout<<"Option 1: insert tail "<<endl;
        cout<<"Option 2: print link list "<<endl;
        cout<<"Option 3: Insert any Index "<<endl;
        cout<<"Option 4: terminate "<<endl;
      
        int opt;
        cin>>opt;
        if(opt == 1){
            cout<<"Enter your value : ";
            int value;
            cin>>value;
            insert_tail(head, value);
        } else if(opt == 2){
            Print_link_list(head);
        }else if(opt == 3){
            
        }else if(opt == 4){
            break;
        }

        
    }
    return 0;
}