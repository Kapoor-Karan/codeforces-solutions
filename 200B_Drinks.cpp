#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum=0,avg;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout<<avg<<endl;
}