#include <bits/stdc++.h>
using namespace std;
int max(vector <int> arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(vector <int> arr){
    int min=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ma=max(arr);
    int mi=min(arr);
    cout<<(ma-mi)<<endl;
    }
}