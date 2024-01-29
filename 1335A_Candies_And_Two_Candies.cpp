#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=n-1,b=1,count=0;
        while(a>b){
            count++;
            a--;
            b++;
        }
        cout<<count<<endl;
    }
}