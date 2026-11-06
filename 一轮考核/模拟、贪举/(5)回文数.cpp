#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int cnt[10];
    for(int i = 0; i < 10; i++){
        cin >> cnt[i];
    }
    int odd = 0;
    int mid = -1;
    for(int i = 0; i < 10; i++){
        if(cnt[i] % 2 != 0){
            odd++;
            mid = i;
        }
    }
    if(odd > 1){
        cout << -1 << endl;
        return 0;
    }
    string left;
    string mid_str;
    if(odd == 1){
        mid_str += (char)('0' + mid);
        cnt[mid] --;
    }
    for(int d = 0; d <= 9; d++){
        int t = cnt[d] / 2;
        left += string(t, '0' + d);
    }
    if(left.empty()){
        if(!mid_str.empty())
            cout << mid_str << endl;
        else
            cout << -1 << endl;
        return 0;
    }
    if(left[0] == '0'){
        bool has_nonzero = false;
        for(int i = 0; i < left.size(); i++){
            if(left[i] != '0'){
                swap(left[0], left[i]);
                has_nonzero = true;
                break;
            }
        }
        if(!has_nonzero){
            cout << -1 << endl;
            return 0;
        }
    }
    string right = left;
    reverse(right.begin(), right.end());
    string ans = left + mid_str + right;
    cout << ans << endl;
}