#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    
    if(t==10&&n>1){
        cout<<t;
        for(int i=1;i<n-1;i++){
        cout<<0;
        }
    }else if(n==1&& t==10)
    {
        cout<<-1<<endl;
    }
        else{
            cout<<t;
        for(int i=1;i<n;i++){
        cout<<0;
        }
    }
}