#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="hello";
    int ind=0;
    int i=0;
    while(i<s.length() &&ind<5){
        if(s[i]==ans[ind]){
            ind++;
        }
        i++;
    }
    if(ind==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}