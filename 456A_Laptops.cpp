#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i].first<arr[i+1].first&&arr[i].second>arr[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
}