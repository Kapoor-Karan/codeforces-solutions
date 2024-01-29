#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a="",b="";
    int acount=0,bcount=0;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        if(a==""){
            a=x;
            acount++;
        }else if(b==""&&x!=a){
            b=x;
            bcount++;
        }else{
            if(x==a){
                acount++;
            }else if(x==b){
                bcount++;
            }
        }
    }
    if(acount>bcount){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
}