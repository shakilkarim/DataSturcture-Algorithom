#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int value;
        Node * address;

        Node(int value){
            this->value = value;
            this->address = NULL;
        }
};
int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    a.address = &b;
    b.address = &c;

    cout<<a.value<<endl;
    cout<<a.address->value<<endl;
    cout<<b.address->value<<endl;
    
    return 0;
}