#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        if(arr[i].length()!=3){
            count=0;
        }else{
            if(arr[i][0]=='Y'||arr[i][0]=='y'){
                count++;
            }
            if(arr[i][1]=='E'||arr[i][1]=='e'){
                count++;
            }
            if(arr[i][2]=='S'||arr[i][2]=='s'){
                count++;
            }
        }
        if(count==3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}