#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,po=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            po=po+arr[i];
        }else if(arr[i]==-1){
            if(po>0){
                po--;
            }else{
                count++;
            }
        }
    }
    cout<<count<<endl;
}