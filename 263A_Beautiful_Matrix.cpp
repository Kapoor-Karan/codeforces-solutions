#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                a=i;
                b=j;
                break;
            }
        }
    }
    if(a>=2&&b>=2){
        cout<<(a-2)+(b-2)<<endl;
    }else if(a>=2&&b<2){
        cout<<(a-2)+(2-b)<<endl;
    }else if(b>=2&&a<2){
        cout<<(b-2)+(2-a)<<endl;
    }else{
        cout<<(2-a)+(2-b)<<endl;
    }
}