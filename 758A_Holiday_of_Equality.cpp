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
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int m=max(arr);
    int count=0;
    for(int i=0;i<n;i++){
        count=count+(m-arr[i]);
    }
    cout<<count<<endl;
}