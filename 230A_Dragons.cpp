#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    pair<int,int> arr[1000];
    int s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    bool isStrong =true;
    for(int i=0;i<n;i++){
        if(arr[i].first>=s){
            isStrong=false;
            break;
        }
        s+=arr[i].second;
    }
    if(isStrong){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}