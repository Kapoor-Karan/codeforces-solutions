#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        bool winner=true;
        for(int i=0;i<n;i++){
            if(arr[i]==1&&i!=0){
                winner=!winner;
            }else if(i==n-1){
                winner=!winner;
            }
        }
        if(winner){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}