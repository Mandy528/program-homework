#include<iostream>
#include<string>
using namespace std;
int mid[10][10];
void init(){
    mid[1][3]=mid[3][1]=2;
    mid[1][7]=mid[7][1]=4;
    mid[1][9]=mid[9][1]=5;
    mid[2][8]=mid[8][2]=5;
    mid[3][7]=mid[7][3]=5;
    mid[3][9]=mid[9][3]=6;
    mid[4][6]=mid[6][4]=5;
    mid[7][9]=mid[9][7]=8;
}
int main(){
    init();
    string s;
    while(cin>>s){
        bool vis[10]={false};
        bool ok =true;
        int pre=s[0]-'0';
        vis[pre]=true;
        for(int i=1;i<s.size();i++){
            int cur=s[i]-'0';
            if(vis[cur]){
                ok=false;
                break;
            }
            int cross =mid[pre][cur];
            if(cross!=0&&!vis[cross]){
                ok =false;
                break;
            }
            vis[cur]=true;
            pre=cur;
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}