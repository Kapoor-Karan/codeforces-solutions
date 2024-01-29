#include<iostream>
using namespace std;
int ma(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }else if(b>a&&b>c){
        return b;
    }
    return c;
}
int minu(int a,int b,int c){
    if(a<b&&a<c){
        return a;
    }else if(b<a&&b<c){
        return b;
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int m=ma(a,b,c);
    int mi=minu(a,b,c);
    if(a!=m&&a!=mi){
        cout<<a<<endl;
    }else if(b!=m&&b!=mi){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }
    }
}