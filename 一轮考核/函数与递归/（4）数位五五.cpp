#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    int x,y;
    cin>>x>>y;
    int L,R;
    if(x<y){
        L=x;
        R=y;
    }
    else{
        L=y;
        R=x;
    }
    int cnt=0;
    for(int i=L;i<=R;i++){
        int a=sum(i);
        if(a%5==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}