#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<arr[i];j++){
            if((count+1)%3==0||(count+1)%10==3){
                if((count+2)%3==0||(count+2)%10==3){
                    count+=3;
                }else{
                    count+=2;
                }
            }else{
                count++;
            }
        }
        cout<<count<<endl;
    }
}