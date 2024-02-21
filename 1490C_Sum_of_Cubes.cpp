#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=1,b=1;
        long long int sum=(a+b)*(a*a-a*b+b*b); 
        while(sum<x){
            if(a==b){
                b++;
            }else{
                a++;
            }
            sum=(a+b)*(a*a-a*b+b*b); 
        }
        if(sum==x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}