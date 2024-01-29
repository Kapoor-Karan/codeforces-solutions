#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            count++;
        }
    }
    if(count>(str.length()-count)){
        for(int i=0;i<str.length();i++){
            if(str[i]>='A'&&str[i]<='Z'){
                cout<<str[i];
            }else{
                cout<<(char)(str[i]-32);
            }
        }
    }else{
        for(int i=0;i<str.length();i++){
            if(str[i]>='a'&&str[i]<='z'){
                cout<<str[i];
            }else{
                cout<<(char)(str[i]+32);
            }
    }
}}