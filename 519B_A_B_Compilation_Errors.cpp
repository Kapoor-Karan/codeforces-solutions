#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<n-2;i++){
        int x;
        cin>>x;
        c.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int i=0;
    for(;i<b.size();i++){
        if(a[i]!=b[i]){
            break;
        }
    }
    cout<<a[i]<<endl;
    i=0;
    for(;i<c.size();i++){
        if(b[i]!=c[i]){
            break;
        }
    }
    cout<<b[i]<<endl;
}