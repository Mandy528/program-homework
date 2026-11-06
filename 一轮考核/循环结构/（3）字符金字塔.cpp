#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int n;
    n=ch-'A'+1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(char c='A';c<='A'+i;c++){
            cout<<c;
        }
        for(char c='A'+i-1;c>='A';c--){
            cout<<c;
        }cout<<endl;
    }
    return 0;
}