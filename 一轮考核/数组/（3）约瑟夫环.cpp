#include<iostream>
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    bool arr[n];
    for(int i=0;i<n;i++){
        arr[i]=true;
    }
    int cnt=0;
    while(cnt<n-1){
        int num=0;
        while(true){
            if(arr[k]){
                num++;
            }
            if(num==m)break;
            k=(k+1)%n;
        }
        arr[k]=false;
        cnt++;
        k=(k+1)%n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}