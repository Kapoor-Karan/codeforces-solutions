#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int dp[100001];
    dp[0]=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=dp[i-1];
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }    
}