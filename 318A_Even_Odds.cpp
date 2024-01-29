#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    int x=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(x==k){
                cout<<i<<endl;
                return 0;
            }
            x++;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            if(x==k){
                cout<<i<<endl;
                return 0;
            }
            x++;
        }
    }
}