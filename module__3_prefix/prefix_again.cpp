
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,q;
    cin>>n>>q;
    int a[n];

    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<q; i++){
        long long int l,m;
        cin>>l>>m;
        l--;
        m--;
        long long int sum = 0;

        for(int i = l; i<=m; i++){
            sum = sum + a[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}