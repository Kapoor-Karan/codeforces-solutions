#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char> dist;
    for(int i=0;i<str.length();i++){
        dist.insert(str[i]);
    }
    if(dist.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
       cout<<"IGNORE HIM!"<<endl; 
    }
}