#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        while(i<n){
            char c=s[i];
            if(c=='0'||c=='2'||c=='4'||c=='6'||c=='9'){
                cout<<c;
                i++;
                continue;
            }
            if(c=='z'&&n-i>=4){
                if(s[i+1]=='e'&& s[i+2]=='r'&& s[i+3]=='o'){
                    cout<<"0";
                    i+=4;
                    continue;
                }
            }
            if(c=='t' && n-i>=3){
                if(s[i+1]=='w' && s[i+2]=='o'){
                    cout<<"2";
                    i+=3;
                    continue;
                }
            }
            if(c=='f' && n-i>=4){
                if(s[i+1]=='o' && s[i+2]=='u' && s[i+3]=='r'){
                    cout<<"4";
                    i+=4;
                    continue;
                }
            }
            if(c=='s' && n-i>=3){
                if(s[i+1]=='i' && s[i+2]=='x'){
                    cout<<"6";
                    i+=3;
                    continue;
                }
            }
            if(c=='n' && n-i>=4){
                if(s[i+1]=='i' && s[i+2]=='n' && s[i+3]=='e'){
                    cout<<"9";
                    i+=4;
                    continue;
                }
            }
            i++;
        }
        cout<<'\n';
    }
    return 0;
}