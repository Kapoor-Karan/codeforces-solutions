#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char> ans;
    int i=0;
    for(;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            ans.insert(str[i]);
        }
    }
    
    int size=ans.size();
    cout<<size<<endl;
}