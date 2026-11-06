#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> a(n),b(n),delta(n);
    long long sum=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum+=b[i];
        delta[i]=a[i]-b[i];
    }
    sort(delta.begin(),delta.end(),greater<long long>());
    for(int i=0;i<k;i++){
        sum+=delta[i];
    }
    cout<<sum<<endl;
    return 0;
}