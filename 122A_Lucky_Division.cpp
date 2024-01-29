#include <iostream>
using namespace std;
bool isLN(int num){
    while(num!=0){
        int rem=num%10;
        if(rem!=4&&rem!=7){
            return false;
        }
        num=num/10;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int temp=n;
    bool isLucky=isLN(temp);
    bool luckyfound=false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            if(isLN(i)){
                cout<<"YES"<<endl;
                luckyfound=true;
                break;
            }
        }
    }
    if(!luckyfound){
        if(isLucky||n%7==0||n%4==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}