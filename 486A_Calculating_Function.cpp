#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int i=1,j;
    while(i<=n){
        if(i==1){
            j=-1;
        }else if(i%2==0){
            j+=i;
        }else{
            j-=i;
        }
        i++;
    }
    cout<<j<<endl;
}