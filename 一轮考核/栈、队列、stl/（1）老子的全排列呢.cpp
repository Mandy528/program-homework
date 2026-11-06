#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    do{
        cout<<a[0];
        for(int i=1;i<8;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
    }while(next_permutation(a,a+8));
    return 0;
}