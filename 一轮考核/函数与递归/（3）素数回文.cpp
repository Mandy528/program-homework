#include<iostream>
using namespace std;
bool isprime(long long x){
    if(x<2) return false;
    for(long long i=2;i*i<=x;i++)
        if(x%i==0) return false;
    return true;    
}
int main(){
    long long t;
    cin>>t;
    long long tmp=t;
    long long base=1;
    while(tmp>=10){
        base*=10;
        tmp/=10;
    }
    long long n=t;
    tmp=t/10;
    while(tmp>0){
        n=n*10+tmp%10;
        tmp/=10;
    }
    if(isprime(n))cout<<"prime"<<endl;
    else cout<<"noprime"<<endl;
    return 0;
}