#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
        }
        bool sort = true;
        for(int j = 0 ; j < n; j++){
            if(arr[j] < arr[j - 1]){
                sort = false;
            }
        }
        if(sort){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


      
    }
    
    return 0; 
}