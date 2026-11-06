#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            int res=j*i;
            cout<<j<<"*"<<i<<"=";
            if(res<10){
                cout<<" "<<res;
            }
            else{
                cout<<res;
            }
            if(j!=i){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}