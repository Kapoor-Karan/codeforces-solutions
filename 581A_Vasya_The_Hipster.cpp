#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<b<<" ";
        cout<<(a-b)/2<<endl;
    }else if(b>a){
        cout<<a<<" ";
        cout<<(b-a)/2<<endl;
    }else{
        cout<<a<<" "<<0<<endl;
    }
}