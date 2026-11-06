#include<iostream>
using namespace std;
bool isLeap(int y){
    if(y%400==0)return true;
    if(y%100==0)return false;
    if(y%4==0)return true;
    return false;
}
int Day(int y,int m){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        return 31;
    if(m==4||m==6||m==9||m==11)
        return 30;
    if(isLeap(y))return 29;
    else return 28;
    return 0;
}
int count2(int num,int x){
    int res=0;
    int shi=num/10;
    if(shi==x) res++;
    int ge=num%10;
    if(ge==x) res++;
    return res;
}
int count4(int num,int x){
    int res=0;
    int tmp=num;
    while(tmp>0){
        int d=tmp%10;
        if(d==x) res++;
        tmp=tmp/10;
    }
    return res;
}
int main(){
    int y,m,x;
    while(cin>>y>>m>>x){
        int cnt=0;
        int day=Day(y,m);
        int year=count4(y,x);
        int mouth=count2(m,x);
        for(int d=1;d<=day;d++){
            cnt+=year;
            cnt+=mouth;
            cnt+=count2(d,x);
        }
        cout<<cnt<<endl;
    }
    return 0;
}