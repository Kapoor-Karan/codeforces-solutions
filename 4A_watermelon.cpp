#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool pos=false;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i+j==n){
                if(i%2==0&&j%2==0){
                    pos=true;
                    break;
                }
            }
        }
    }
    if(pos==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}