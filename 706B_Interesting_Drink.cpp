#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int d;
    cin>>d;
    while(d--){
        int m;
        cin>>m;
        // int pos=0;
        // for(int i=0;i<n;i++){
        //     if(m>=arr[i]){
        //         pos++;
        //     }else{
        //         break;
        //     }
        // }
        // cout<<pos<<endl;
        int l=0;
        int h=n-1;
        int mid=(l+h)/2;
        int pos=0;
        if(arr[0]>m){
            cout<<0<<endl;
        }else if(arr[n-1]<=m){
            cout<<n<<endl;
        }
        else{
        while(l<=h){
            if(arr[mid]>m){
                pos=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            mid=(l+h)/2;
        }
        cout<<pos<<endl;
        }
    }
}