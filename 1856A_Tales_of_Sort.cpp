#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
        
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool nsort=true;
        int count=0;
        while(nsort==true){
            
            if(sorted(arr,n)==true){
                break;
            }else{
                count++;
                for(int i=0;i<n;i++){
                    if(arr[i]>0){
                    arr[i]=arr[i]-1;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}