#include<iostream>
using namespace std;
int main(){
    int L,M;
    cin>>L>>M;
    bool tree[10005]={false};
    for(int i=0;i<=L;i++){
        tree[i]=true;
    }
    for(int i=1;i<=M;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            tree[j]=false;
        }
    }
    int num=0;
    for(int i=0;i<=L;i++){
        if(tree[i])num++;
    }
    cout<<num<<endl;
    return 0;
    
}