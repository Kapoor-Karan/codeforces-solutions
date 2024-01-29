#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n!=0){
        if(n>=100){
            count+=n/100;
            n=n-((n/100)*100);
        }
        if(n>=20){
            count+=n/20;
            n=n-((n/20)*20);
        }
        if(n>=10){
            count+=n/10;
            n=n-((n/10)*10);
        }
        if(n>=5){
            count+=n/5;
            n=n-((n/5)*5);
        }
        if(n>=1){
            count+=n/1;
            n=n-((n/1)*1);
        }
    }
    cout<<count<<endl;
}