#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long  arr[105];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                long long x=arr[i],y=arr[j],z=arr[k];
                if(x>y)swap(x,y);
                if(y>z)swap(y,z);
                if (x>y)swap(x,y);
                if(x+y>z){
                    cout<<x<<" "<<y<<" "<<z<<endl;
                }
            }
        }
    }
    cout<<"No solution"<<endl;
    return 0;
}