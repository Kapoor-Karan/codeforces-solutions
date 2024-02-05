#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int s=n/2;
    int rem=n-(s*2);
    s+=rem;
    while(s%m!=0){
        s++;
    }if(s>n){
        cout<<-1<<endl;
    }else{
    cout<<s<<endl;
    }
}