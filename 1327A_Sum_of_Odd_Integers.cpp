#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a, b;
        cin>>a >> b;
        if((a%2==0&&b%2!=0)|| (a%2 != 0 && b%2 == 0) || (a < b*b)) {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}