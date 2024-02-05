#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int tf=0,ff=0,hund=0;
    bool isPos=true;
    for(int i=0;i<n;i++){
        if(arr[i]==25){
            tf++;
        }else if(arr[i]==50){
            if(tf>0){
                tf--;
                ff++;
            }else{
                isPos=false;
                break;
            }
        }else{
            if(ff>0&&tf>0){
                ff--;
                tf--;
                hund++;
            }else if(tf>2){
                tf-=3;
                hund++;
            }else{
                isPos=false;
                break;
            }
        }
    }
    if(isPos){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}