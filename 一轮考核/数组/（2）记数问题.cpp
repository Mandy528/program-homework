#include<iostream>
using namespace std;
int main(){
    
    int n,x;
    cin>>n>>x;
    int cnt=0;
    int arr[10];
    for(int i=1;i<=n;i++){
        int tmp=i;
        int len=0;
        while(tmp>0){
            arr[len]=tmp%10;
            len++;
            tmp=tmp/10;
        }
        for(int j=0;j<len;j++){
            if(arr[j]==x){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}