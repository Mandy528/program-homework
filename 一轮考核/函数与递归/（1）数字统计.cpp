#include<iostream>
using namespace std;
int main(){
    int L,R;
    cin>>L>>R;
    int cnt=0;
    int tmp;
    for(int i=L;i<=R;i++){
        int tmp=i;
        while(tmp>0){
            int a=tmp%10;
            if(a==2){
                cnt++;
            }
            tmp=tmp/10;
        }
    }
    cout<<cnt<<endl;
}