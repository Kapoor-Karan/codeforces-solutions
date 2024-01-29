#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int rem=240-k;
    int i=1,count=0;
    while(rem>=0&&count<=n){
        if(rem-(5*i)>=0&&count<n){
            rem=rem-(5*i);
            i++;
            count++;
        }else{
            break;
        }
    }
    cout<<count<<endl;
}