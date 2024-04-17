#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n;
    cin>>n;
    vector<long long int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    vector<long long int>pre(n);
    pre[0] = a[0];
    for(int i = 1; i<n; i++){
        pre[i] = pre[i - 1] + a[i];
    }
    reverse(pre.begin(), pre.end());
    for(long long int p:pre){
        cout<<p<<" ";
    }
    return 0;
}


