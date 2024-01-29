#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> ans;
        bool inc=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==0){
                ans.push_back(x);
                cout<<1;
            }else if(inc==true){
                if(x>=ans[(ans.size())-1]){
                    ans.push_back(x);
                    cout<<1;
                }else if(x<=ans[0]){
                    ans.push_back(x);
                    inc=false;
                    cout<<1;
                }else{
                    
                    cout<<0;
                }
            }else{
                if(x<=ans[0]&&ans[(ans.size())-1]<=x){
                    ans.push_back(x);
                    cout<<1;
                }else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
}