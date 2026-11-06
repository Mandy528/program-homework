#include<stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(n >= 2){
        if(a[n-2] < a[n-1]){
            printf("UP\n");
        }
        else{
            printf("DOWN\n");
        }
    }
    else{
        if(a[0]==15)
            printf("DOWN\n");
        else if(a[0]==0)
            printf("UP\n");
        else
            printf("-1\n");
    }
}