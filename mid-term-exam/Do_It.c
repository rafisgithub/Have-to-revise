#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    while(x--){
        for(int i=1;i<=y;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}