#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        string str="codeforces";
        bool flag=true;
        for(int i=0;i<str.length();i++){
            if(str[i]==c){
                flag=false;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
}