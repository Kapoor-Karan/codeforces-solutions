#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str[0]=='a'||str[1]=='b'||str[2]=='c'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}