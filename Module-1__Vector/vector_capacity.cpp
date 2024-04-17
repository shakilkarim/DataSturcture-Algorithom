#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    // cout<<v.max_size();
    cout<<v.capacity()<<endl;
    v.push_back(55);
    cout<<v.capacity()<<endl;
    v.push_back(55);
    v.push_back(55);
    v.push_back(55);
    v.push_back(55);
   for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
   }
   
    
    return 0;
}