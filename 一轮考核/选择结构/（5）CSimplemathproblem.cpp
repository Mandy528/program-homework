#include<iostream>
using namespace std;
int main(){
    long long X,Y;
    long long Z;
    cin>>X>>Y;
    if(Y%X==0){
        Z=X+Y;
        cout<<Z<<endl;
    }
    else{
        Z=Y-X;
        cout<<Z<<endl;
    }
}