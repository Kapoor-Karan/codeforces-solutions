#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=0;
    while(x!=0){
        if(x>=5){
            count=count+(x/5);
            x=x-((x/5)*5);
        }
        if(x>=4){
            count=count+(x/4);
            x=x-((x/4)*4);
        }
        if(x>=3){
            count=count+(x/3);
            x=x-((x/3)*3);
        }
        if(x>=2){
            count=count+(x/2);
            x=x-((x/2)*2);
        }
        if(x>=1){
            count=count+(x/1);
            x=0;
        }
    }
    cout<<count<<endl;
}