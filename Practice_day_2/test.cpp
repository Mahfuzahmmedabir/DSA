#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    unordered_set<int> s(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(s.find(x) != s.end()){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0; 
}