#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool ish=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ish=true;
            break;
        }
    }
    if(ish){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
}