#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    if(n==1){
        cout<<0;
    }else if(n==2){
        if(str[0]==str[1]){
            cout<<1;
        }else{
            cout<<0;
        }
    }else{
    for(int i=0;i<n-1;i++){
        if(i!=0&&i!=n-1){
            if(str[i]==str[i+1]){
                count++;
            }
        }else if(i==0){
            if(str[i]==str[i+1]){
                count++;
            }
        }else{
            if(str[i]==str[i-1]){
                count++;
            }
        }
    }
    cout<<count<<endl;}
}