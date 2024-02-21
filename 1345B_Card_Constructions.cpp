#include <iostream>
#include <vector>
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
    for(int i=0;i<n;i++){
        int cards_used=0,c=0,a=0,b=1,j=1;
        while(arr[i]!=0||arr[i]!=1){
        while(cards_used<arr[i]){
            if(cards_used+((3*a)+(2*b))<=arr[i]){
                cards_used=(3*a)+(2*b);
                a+=j;
                j++;
                b++;
            }else{
                arr[i]-=cards_used;
                a=0,b=1,j=1,cards_used=0;
                c++;
                break;
            }
        }
        }
        cout<<c<<endl;
    }
}