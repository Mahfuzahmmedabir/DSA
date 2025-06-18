#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3, 2, 4,2};
    // v.insert(v.begin()+2, v1.begin(),v1.end());
    // v.erase(v.begin()+1 , v.begin()+5);
    // replace(v.begin(), v.begin() + 4,2, 100);

      auto it = find(v.begin(), v.end(),2);
      if(it != v.end()){
        cout << "found" << endl;
      }else{
        cout << "Not found";
      }


    for(int x : v){
    cout << x << " ";
    }

    
    return 0; 
}