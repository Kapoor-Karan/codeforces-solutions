#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s,d,count=0;
        cin>>s>>d;
        while(s>0&&d>0){
            if(s>=d){
                if(s-2>=0){
                    s-=2;
                }else{
                    break;
                }
                
                d--;
            }else{
                if(d-2>=0){
                    d-=2;
                }else{
                    break;
                }
                s--;
            }
            count++;
        }
        cout<<count<<endl;
    }
}