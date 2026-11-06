#include <iostream>
#include <algorithm>
using namespace std;
struct Answer{
    int res,a,b;
};
Answer ans[20];
int cnt=0;
bool check(int x,int y,int z){
    int vis[10]={0};
    int num;
    num=x;
    while(num>0){
        int d=num%10;
        if(d==0||vis[d])
            return false;
        vis[d]=1;
        num/=10;
    }
    num=y;
    while(num>0){
        int d=num%10;
        if(d==0||vis[d])
            return false;
        vis[d]=1;
        num/=10;
    }
    num=z;
    while(num>0){
        int d=num%10;
        if(d==0||vis[d])
            return false;
        vis[d]=1;
        num/=10;
    } 
    int sum=0;
    for(int i=1;i<=9;i++)
        if(vis[i])
            sum++;
    return sum==9;       
}
bool cmp(Answer p1,Answer p2){
    if(p1.res!=p2.res)
        return p1.res<p2.res;
    return p1.a<p2.a;
}
int main(){
    for(int a=12;a<=99;a++){
        for(int b=a;b<=999;b++){
            int res=a*b;
            if(res>9999)
                break;
            if(check(a,b,res)){
                ans[cnt].res=res;
                ans[cnt].a=a;
                ans[cnt].b=b;
                cnt++;
            }
        }
    }
    for(int a=1;a<=9;a++){
        for(int b=a;b<=9999;b++){
            int res=a*b;
            if(res>9999)
                break;
            if(check(a,b,res)){
                ans[cnt].res=res;
                ans[cnt].a=a;
                ans[cnt].b=b;
                cnt++;
            }
        }
    }
    sort(ans,ans+cnt,cmp);
    for(int i=0;i<cnt;i++){
        cout<<ans[i].res<<" = "<<ans[i].a<<" x "<<ans[i].b<<endl;
    }
    return 0;
}