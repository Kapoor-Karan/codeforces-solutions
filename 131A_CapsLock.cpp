#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]>='A'&&s[0]<='Z'){
        bool allCaps=true;
        for(int i=1;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z'){

            }else{
                allCaps=false;
                break;
            }
        }
        if(allCaps){
            string ans="";
            for(int i=0;i<s.length();i++){
                ans+=char(s[i]+32);
            }
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }else{
        bool allCaps=true;
        for(int i=1;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z'){

            }else{
                allCaps=false;
                break;
            }
        }
        if(allCaps){
            string ans="";
            ans+=char(s[0]-32);
            for(int i=1;i<s.length();i++){
                ans+=char(s[i]+32);
            }
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }
}