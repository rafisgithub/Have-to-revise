#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diviced_by_two = 0;
    int divided_by_three = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]%3==0){
            diviced_by_two++;
        }else if(arr[i]%2==0){
            diviced_by_two++;
        }else if(arr[i]%3==0){
            divided_by_three++;
        }
    }
    printf("%d %d\n",diviced_by_two,divided_by_three);
    return 0;
}