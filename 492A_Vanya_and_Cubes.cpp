#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h=0,sum=0, i=1;;
    while(sum<=n){
        if(sum+i<=n){
        sum+=i;
        }else{
            break;
        }
        i++;
        h++;
        
    }
    cout<<h<<endl;
}