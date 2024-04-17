#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int value;
        Node * address;
};
int main(){

    Node a,b,c;
    a.value = 5;
    b.value = 300;
    c.value = 1400;

    a.address = &b;
    b.address = &c;
    c.address = NULL;

    // cout<<a.value<<endl;
    // cout<<b.value<<endl;
    // cout<<c.value<<endl;
    cout<<a.address<<endl;
    cout<<a.address->value<<endl;
    cout<<b.address->value<<endl;
    cout<<c.address;
    return 0;
}