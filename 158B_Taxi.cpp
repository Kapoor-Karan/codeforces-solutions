#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int a=0,b=0,c=0,d=0,count=0;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        if(x==1){
            a++;
        }else if(x==2){
            b++;
        }else if(x==3){
            c++;
        }else{
            d++;
        }
    }
    count+=d;
    count+=c;
    a-=c;
    if(a<0){
        a=0;
    } 
    count+=b/2;
    b=b%2;
    a+=b*2;
    if(a%4==0){
        count+=a/4;
    }else{
        count+=a/4+1;
    }
    cout<<count<<endl;
}