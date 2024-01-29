#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int lc=0;
        if(a==1){
            lc++;
        }
        if(b==1){
            lc++;
        }
        if(c==1){
            lc++;
        }
        if(lc>=2){
            count++;
        }
    }
    cout<<count<<endl;
}