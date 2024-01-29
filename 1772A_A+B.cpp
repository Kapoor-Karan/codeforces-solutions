#include<iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        cout<<(int)str[0]+(int)str[2]<<endl;
    }
}