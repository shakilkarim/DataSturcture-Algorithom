#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>a(n);
    vector<int>b(n);
    vector<int>c;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    c = b;
    c.insert(c.end(), a.begin(), a.end());
    for(int cc:c){
        cout<<cc<<" ";
    }
    return 0;
}