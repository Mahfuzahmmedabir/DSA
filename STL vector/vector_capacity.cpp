#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v;
    // cout << v.capacity() << endl;
    // v.push_back(10); 
    //  cout << v.capacity() << endl;
    // v.push_back(10);
    //  cout << v.capacity() << endl;
    // v.push_back(10);
    //  cout << v.capacity() << endl;
    // v.push_back(10);  
    //  cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // v.clear();
    v.resize(10,200);
    for(int i = 0; i < v.size(); i++){
       cout << v[i]<< " ";
    }
    // cout << v[1];
    return 0; 
}