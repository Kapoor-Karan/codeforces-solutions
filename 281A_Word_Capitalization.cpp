#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str[0]>='A'&&str[0]<='Z'){
        cout<<str<<endl;
    }else{
        str[0]=str[0]-32;
        cout<<str<<endl;
    }
}