#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int count=0;
        while(a%b!=0){
            int rem;
            rem=a%b;
            a= a+(b-rem);
            count=count+ (b-rem);
        }
        cout<<count<<endl;
    }
}