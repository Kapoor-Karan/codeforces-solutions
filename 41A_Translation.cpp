#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    bool tra=true;
    if(str1.length()!=str2.length()){
        cout<<"NO"<<endl;
    }else{
        for(int i=0,j=str1.length()-1;i<str1.length();i++,j--){
            if(str1[i]!=str2[j]){
                tra=false;
                break;
            }
        }
        if(tra==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}