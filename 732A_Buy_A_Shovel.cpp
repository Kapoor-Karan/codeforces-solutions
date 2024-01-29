#include <iostream>
using namespace std;
int main(){
    int a,b,count=1;
    cin>>a>>b;
    bool shov=true;
    while(shov==true){
        for(int i=1;i<=10;i++){
            if((a*i)%10==0||(a*i-b)%10==0){
                cout<<count<<endl;
                shov=false;
                break;
                
            }else{
                count++;
            }
        }
    }
    }
