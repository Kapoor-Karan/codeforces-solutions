#include <bits/stdc++.h>
using namespace std;
int isdistinct(int i){
    unordered_set <int> arr;
    while(i!=0){
        arr.insert(i%10);
        i=i/10;
    }
    if(arr.size()==4){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=10000;i++){
        bool a =isdistinct(i);
        if(a==true){
        cout<<i<<endl;
        break;
        }
    }
    
}