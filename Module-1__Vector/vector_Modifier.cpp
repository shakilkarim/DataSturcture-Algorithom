#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>x = {1,3,4};
    vector<int>y = {10,20,30};

    x = y;
    for(int i = 0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }
    return 0;
}