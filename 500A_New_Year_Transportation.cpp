#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector <int> arr;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int prst=0,i=0;
    bool pos=false;
    while(prst<t){
        i=prst;
        prst=i+arr[i];
        if(prst==t-1){
            cout<<"YES"<<endl;
            pos=true;
            break;
        }
    }
    if(!pos){
        cout<<"NO"<<endl;
    }
}