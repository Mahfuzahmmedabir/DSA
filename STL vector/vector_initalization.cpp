#include<bits/stdc++.h>
using namespace std;
int main(){



    // type 1
    // vector<int> v;
    // cout << v.size();

    // type 2
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // cout << v.size();

    //  type 3
    // vector<int> v(5, 4);
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";

    // }

    // vector<int> v(10, 1);
   
    // vector<int> v1(v);
    //  for(int i =0; i<v.size(); i++){
    //     cout << v1[i] << " ";
    // }

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v = { 1, 2, 3, 4 ,5}; 
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }

   
    return 0; 
}