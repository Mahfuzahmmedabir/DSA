#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int q;
    cin >> q;
    int flage = 0;

    while(q--){
        int x;
        cin >> x;
        int flage = 0;
        for(int i = 0; i<n; i++){
            if(v[i] == x){
                flage = 1;
                break;
            }else{
                flage = 0;
            }

        }
        if(flage == 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0; 
}