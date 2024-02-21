#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        unordered_set <int> ans;
        for(int j=l-1;j<n;j++){
            ans.insert(arr[j]);
        }
        cout<<ans.size()<<endl;
    }
}