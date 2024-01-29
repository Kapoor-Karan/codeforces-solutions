#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=n+1;
    bool prime=true;
    while(prime){
        bool isprime=true;
        for(int j=2;j<i-1;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime==true&&i==m){
            cout<<"YES"<<endl;
            prime =false;
        }else if(isprime==true&&i!=m){
            cout<<"NO"<<endl;
            prime =false;
        }else{
            i++;
        }
    }
}