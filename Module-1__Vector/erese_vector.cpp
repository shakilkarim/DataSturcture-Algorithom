#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>a = {12,2,34,4,5,6,7};

    a.erase(a.begin() + 1, a.end()-1);
    for(int aa:a){
        cout<<aa<<endl;
    }
    return 0;
}