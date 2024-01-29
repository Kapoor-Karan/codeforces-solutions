#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<=2){
        if(arr[0]!=arr[1]){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else{
    
    for(int i=1;i<n-1;i++){
        if(arr[i-1]!=arr[i]||arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    }
}