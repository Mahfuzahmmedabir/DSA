#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0; i<n; i++){
    //     cin >> arr[i];
    // } 
    // int i = 0, j= n-1;
    // while(i<j){
    //     int tem = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = tem;
    //     i++;
    //     j--;
    // }

    // for(int i = 0; i<n; i++){
    //     cout  << arr[i] << " ";
    // }

    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i =0; i<n; i++){
       cin >> v[i];
    }

 
    for(int i =0; i<n; i++){
        cout << v[i] << " ";
    }


    return 0; 
}