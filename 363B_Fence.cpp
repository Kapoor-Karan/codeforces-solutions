#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int sum=0,ind=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int min=sum;
    for(int i=1;i<n-k+1;i++){
        sum=sum-arr[i-1]+arr[i+k-1];
        if(sum<min){
            min=sum;
            ind=i;
        }
    }
    cout<<ind+1<<endl;
}