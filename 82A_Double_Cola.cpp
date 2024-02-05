#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=5,x=1;
    while(c<n){
        c*=2;
        x*=2;
    }
    string name[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=x;
        if(sum>=n){
            cout<<name[i]<<endl;
            break;
        }
    }
}