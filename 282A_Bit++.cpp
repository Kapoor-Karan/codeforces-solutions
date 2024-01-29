#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='+'){
                count++;
                break;
            }else if(str[i]=='-'){
                count--;
                break;
            }
        }
    }
    cout<<count<<endl;
}