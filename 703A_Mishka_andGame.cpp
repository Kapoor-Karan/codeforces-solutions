#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            a++;
        }else if(x<y){
            b++;
        }
    }
    if(a>b){
        cout<<"Mishka"<<endl;
    }else if(a==b){
        cout<<"Friendship is magic!^^"<<endl;
    }else{
        cout<<"Chris"<<endl;
    }
}