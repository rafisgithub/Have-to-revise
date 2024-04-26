#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int r = (m1*d)/(m1+m2);
        int ans = d-r;
        printf("%d\n",ans);
    }
    return 0;
}