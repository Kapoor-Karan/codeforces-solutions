#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
            int j=i+1;
            while(str[i]==str[j])j++;
            if((j-i)>=7){
                cout<<"YES"<<endl;
                return 0;
            }
            i=j-1;
        }
    }
    cout<<"NO"<<endl;
}
