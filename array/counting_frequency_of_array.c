#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[9] = {0};
  

    for(int i=0;i<n;i++){

        // if(arr[i] == 0){
        //     count[0]++;
        // }else if(arr[i]==1){
        //     count[1]++;
        // }else if(arr[i]==2){
        //     count[2]++;
        // }else if(arr[i]==3){
        //     count[3]++;
        // }else if(arr[i]==4){
        //     count[4]++;
        // }

        count[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(count[i]!=0){
        printf("%d = %d\n",i,count[i]);
        }
    }
    return 0;
}