#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n=0;
    int rem=0;
    while(a!=0){
        n+=a;
        rem+=a%b;
        a=a/b;
        if(rem/b>0){
            a+=rem/b;
            rem=rem%b;
        }
    }
    cout<<n<<endl;
}