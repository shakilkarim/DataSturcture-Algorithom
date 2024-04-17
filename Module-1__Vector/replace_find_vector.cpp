#include<bits/stdc++.h>
using namespace std;
int main(){

    //Replace Method
    // vector<int>a={2,3,2,4,5,7,8,2,10};

    // replace(a.begin(), a.end()-4, 2, 500);
    // for(int aa:a){
    //     cout<<aa<<endl;
    // }

    //find

    vector<int>a={2,3,2,4,5,7,8,2,10};

     auto at = find(a.begin(), a.end(), 7);
    if(at == a.end()){
        cout<<"NOT Found";
    }else{
        cout<<"Found";
    }

    return 0;
}