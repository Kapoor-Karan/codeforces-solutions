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
        sort(arr.begin(),arr.end());
        vector <int> a,b;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])==1){
                a.push_back(arr[i]);
                if(i==n-2){
                    a.push_back(arr[n-1]);
                }
            }else{
                b.push_back(arr[i]);
                if(i==n-2){
                    b.push_back(arr[n-1]);
                }
            }
        }
        int odd=0,even=0;
        for(int i=0;i<b.size();i++){
            if(b[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd==0||even==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}