#include<iostream>
#include<cstdio>
using namespace std;
const int MAXN=100005;
long long arr[MAXN];
int main(){
    int T;
    cin>>T;
    while(T--){
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        
        long long max=0;
        long long min=arr[0];
        for(int i=0;i<m;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        long long range;//极差
        range=max-min;
        
        long long sum=0;//平均值
        for(int i =0;i<m;i++){
            sum=sum+arr[i];
        }
        double avg;
        avg=1.0*sum/m;
        double var;//方差
        double total=0.0;
        for(int i=0;i<m;i++){
            total=total+(arr[i]-avg)*(arr[i]-avg);
        }
        var=total/m;
        printf("%lld %.3f\n",range,var);
    }
    return 0;
}