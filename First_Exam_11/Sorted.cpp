#include<bits/stdc++.h>
using namespace std;

bool Sort( vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < v[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool re = Sort(v);

        if(re == true){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
