#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char> ans;
    for(int i=0;i<str.length();i++){
        if(str[i]!='+'){
            
            ans.push_back(str[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=(ans.size()-1)){
            cout<<"+";
        }
    }
}