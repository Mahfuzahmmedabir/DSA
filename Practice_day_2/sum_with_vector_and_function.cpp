#include<bits/stdc++.h>
using namespace std;

void sum(vector<int> & v){
    int sum = 0;
    for(int i=0; i < v.size(); i++){
        sum += v[i];
        cout << sum << " ";
        
    }

}
int main(){
    int n;
    cin >> n;
   vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
   
    }
    sum(arr);
    return 0; 
}