#include <iostream>
using namespace std;
int maxe(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }else if(b>a&&b>c){
        return b;
    }else{
        return c;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=maxe(a,b,c);
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        int sum;
        sum=abs(a-i)+abs(b-i)+abs(c-i);
        if(sum<min&&sum<100){
            min=sum;
        }
    }
    cout<<min<<endl;
}