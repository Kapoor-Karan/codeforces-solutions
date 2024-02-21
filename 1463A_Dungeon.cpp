#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int div=sum/9;
        if(sum%9==0&&a>=div&&b>=div&&c>=div){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}