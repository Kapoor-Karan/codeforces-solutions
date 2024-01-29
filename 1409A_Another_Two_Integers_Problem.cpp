#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,diff,count=0;;
        cin>>a>>b;
        diff=abs(a-b);
        while(diff!=0){
            if(diff>10){
                count=count+(diff/10);
                diff=diff-(10*(diff/10));
            }else{
                count++;
                diff=0;
            }
        }
        cout<<count<<endl;
    }
}