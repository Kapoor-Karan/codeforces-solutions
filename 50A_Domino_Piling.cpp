#include <iostream>
using namespace std;
int main(){
    int a,b,count=0,dom=1;
    cin>>a>>b;
    while(dom*2<=(a*b)){
        dom++;
        count++;
    }
    cout<<count<<endl;
}