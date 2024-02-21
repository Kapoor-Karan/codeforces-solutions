#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        vector <int> first,second;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                first.push_back(arr[i]);
            }else{
                if(second.size()>0&&second[0]==arr[i]){
                    second.push_back(arr[i]);
                }else if(second.size()==0){
                    second.push_back(arr[i]);
                }
            }
        }
        cout<<min(first.size(),second.size())<<endl;
    }
}