#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<char> st;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else if(!st.empty()&&s[i]==')'){
                st.pop();
            }
        }
        cout<<st.size()<<endl;
    }

}
