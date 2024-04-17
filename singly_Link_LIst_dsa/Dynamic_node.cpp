#include<bits/stdc++.h>
using namespace std;
int main(){
    
    class Node {
        public:
            int value;
            Node * address;
    
            Node(int value){
                this->value = value;
                this->address = NULL;
            }
    };

    Node * head = new Node (10);
    Node * a = new Node (20);

    head->address = a;

    cout<<head->value<<endl;
    cout<<a->value<<endl;
    cout<<head->address->value<<endl;
    cout<<a;

    return 0;
}