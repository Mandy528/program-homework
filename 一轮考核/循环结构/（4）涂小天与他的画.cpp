#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int mid=n/2;
        for(int i=1;i<=n;i++){
            if(i<=mid+1){
                for(int j=0;j<(mid+1)-i;j++){
                    cout<<" ";
                }
                for(int k=0;k<2*i-1;k++){
                    cout<<"*";
                }
            }
            else{
                for(int j=0;j<i-(mid+1);j++){
                    cout<<" ";
                }
                for(int k=0;k<2*(n-i+1)-1;k++){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}