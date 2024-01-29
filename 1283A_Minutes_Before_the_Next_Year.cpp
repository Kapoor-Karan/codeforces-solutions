#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==23){
            cout<<(60-b)<<endl;
        }else{
            cout<<((23-a)*60)+(60-b)<<endl;
        }
    }
}