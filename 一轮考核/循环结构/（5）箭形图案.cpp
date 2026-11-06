#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int mid =n+1;
        for(int i=1;i<=2*n+1;i++){
            if(i<=mid){
                for(int j=0;j<2*(mid-i);j++){
                    cout<<" ";
                }
                for(int k=0;k<i;k++){
                    cout<<"*";
                }
            }    
            else{
                for(int j=0;j<2*(i-mid);j++){
                    cout<<" ";
                }
                for(int k=0;k<2*mid-i;k++){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}