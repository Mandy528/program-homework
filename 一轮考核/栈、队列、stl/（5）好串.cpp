#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int stk=0;
    bool ok=true;
    for(int i=0;i< s.size();i++){
        char c=s[i];
        if(c=='a'){
            stk++;
        }
        else{
            if(stk==0){
                ok=false;
                break;
            }
            stk--;
        }
    }
    if(ok&&stk==0){
        cout<<"Good"<<endl;
    }
    else
        cout<<"Bad"<<endl;
    return 0;
}