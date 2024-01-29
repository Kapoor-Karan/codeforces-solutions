#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string str;
    cin>>str;
    if(str.length()>10){
        int len=str.length();
        cout<<str[0]<<len-2<<str[len-1]<<endl;
    }else{
        cout<<str<<endl;
    }}
}