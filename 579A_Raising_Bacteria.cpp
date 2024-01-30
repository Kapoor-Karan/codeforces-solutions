#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int bacteriareq=0;
    while(x!=0){
        if(x%2==1){
            bacteriareq++;
        }
        x=x/2;
    }
    cout<<bacteriareq<<endl;
}