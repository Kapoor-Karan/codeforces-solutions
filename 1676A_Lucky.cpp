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
        int a=arr[i],ls=0,rs=0;
        while(a!=0){
            for(int i=0;i<3;i++){
                rs+=a%10;
                a=a/10;
            }
            for(int i=0;i<3;i++){
                ls+=a%10;
                a=a/10;
            }
        }
        if(ls==rs){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}