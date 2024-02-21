#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,min=0;
    cin>>a>>b;
    bool joy=true;
    if(a==1&&b==1){
        cout<<0<<endl;
    }else{
    while(a>0&&b>0){
        if(joy==true&&b>2){
            a+=1;
            b-=2;
        }else if(joy==true){
            b+=1;
            a-=2;
            joy-=false;
        }else if(joy==false&&a>2){
            b+=1;
            a-=2;
        }else if(joy==false){
            a+=1;
            b-=2;
            joy=true;
        }else{
            a+=1;
            b-=2;
        }
        min++;
    }
    cout<<min<<endl;
    }
}