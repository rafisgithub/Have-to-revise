#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int x;
        scanf("%d",&x);
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(x==arr[i]){
               flag = 1;
            }
        }
        if(!flag){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    return 0;
}