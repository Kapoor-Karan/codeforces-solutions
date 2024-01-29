#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;;
    cin>>n;
    cin>>a;
    int arr1[a];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    cin>>b;
    int arr2[b];
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    unordered_set <int> ans;
    for(int i=0;i<a;i++){
        ans.insert(arr1[i]);
    }
    for(int i=0;i<b;i++){
        ans.insert(arr2[i]);
    }
    if(ans.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}