#include <bits/stdc++.h>
using namespace std;
int maxh(int arr[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    return max;
}
bool isZero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count++;
        }
    }
    if(count==0){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool killed=true;
        int count=1;
        while(killed){
            int maxind;
            maxind=maxh(a,n);
            a[maxind]-=k;
            if(a[maxind]<=0){
                b[maxind]=count;
                count++;
            }
            if(isZero(a,n)){
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}