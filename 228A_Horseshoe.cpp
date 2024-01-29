#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> hs;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        hs.insert(x);
    }
    cout<<(4-hs.size())<<endl;
}