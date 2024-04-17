#include<bits/stdc++.h>
using namespace std;
int main(){

    //Vector Initialization 

    // vector<int> v;
    // vector<int> v(5,20);
    // vector<int> v2(v);
    // int n[5] = {10,20,30,40,50};
    // vector<int>v(n,n + 5);

    vector<int>v = {10,20,30};
    
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}