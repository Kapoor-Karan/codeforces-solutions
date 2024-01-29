#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int a,b,prob,den=6;
    cin>>a>>b;
    int m=max(a,b);
    if(m==6){
        cout<<1<<"/6"<<endl;
    }
    else{
    prob=6-m+1;
    bool red=true;
    while(red){
        if(prob%2==0&&den%2==0){
            prob=prob/2;
            den=den/2;
        }else if(prob%3==0&&den%3==0){
            prob=prob/3;
            den=den/3;
        }else{
            red=false;
        }
    }
    cout<<prob<<"/"<<den<<endl;
    }
}