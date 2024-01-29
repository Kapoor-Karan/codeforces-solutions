#include <iostream>
using namespace std;
int main(){
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int cost=0;
    for(int i=1;i<=w;i++){
        cost=cost+(i*k);
    }
    if(n>=cost){
        cout<<0<<endl;
    }else{
    cout<<(cost-n)<<endl;
    }
}