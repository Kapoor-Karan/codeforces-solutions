#include <iostream>
using namespace std;
int main(){
    int n,ca=0,cd=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            ca++;
        }else{
            cd++;
        }
    }
    if(ca>cd){
        cout<<"Anton"<<endl;
    }else if(ca==cd){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
}