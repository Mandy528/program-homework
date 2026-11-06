#include<iostream>
using namespace std;
int main(){
    int n;
    int b;
    cin>>n;
    if(n%2==0){
        b=n/2;
        cout<<b<<endl;
      
    }
    else{
        b=3*n+1;
        cout<<b<<endl;
        
    }
}