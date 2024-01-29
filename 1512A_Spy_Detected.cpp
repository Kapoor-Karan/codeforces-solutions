#include<iostream>
using namespace std;
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
        int index;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]&&i==0){
                if(arr[i]==arr[i+2]){
                    index=i+2;
                    break;
                }else{
                    index=i+1;
                    break;
                }
            }else if(arr[i]!=arr[i+1]){
                if(arr[i-1]==arr[i]){
                    index=i+2;
                    break;
                }else{
                    index=i+1;
                    break;
                }
            }
        }
        cout<<index<<endl;
    }
}