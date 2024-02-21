#include <iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n=19,c=0;
    while(true){
        int temp=n,sum=0;
        while(temp!=0){
            sum+=temp%10;
            temp=temp/10;
        }
        if(sum==10){
            c++;
        }
        if(c==k){
            cout<<n<<endl;
            break;
        }
        n++;
    }
    
}