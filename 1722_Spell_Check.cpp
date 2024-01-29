#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str,str1="Timur";
        cin>>str;
        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());
        if(str==str1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}