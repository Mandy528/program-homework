#include<iostream>
using namespace std;
void reverse(char c[],int len){
    int l=0,r=len-1;
    while(l<r){
        char t=c[l];
        c[l]=c[r];
        c[r]=t;
        l++;
        r--;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        char s1[60],s2[60];
        cin>>s1>>s2;
        int len1=0;
        while(s1[len1]!='\0') len1++;
        int len2=0;
        while(s2[len2]!='\0') len2++;
        reverse(s1,len1);
        reverse(s2,len2);
        int res[200]={0};
        for(int i=0;i<len1;i++){
            int a=s1[i]-'0';
            for(int j=0;j<len2;j++){
                int b=s2[j]-'0';
                res[i+j]+=a*b;
            }
        }
        for(int i=0;i<len1+len2;i++){
            res[i+1]+=res[i]/10;
            res[i]=res[i]%10;
        }
        int pos=len1+len2-1;
        while(pos>=0&&res[pos]==0)
            pos--;
        if(pos<0)
            cout<<0<<endl;
        else{
            for(int i=pos;i>=0;i--){
                cout<<res[i];
            }
            cout<<endl;
        }
    }
    return 0;
}