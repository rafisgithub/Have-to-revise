#include<stdio.h>
#include<string.h>
int main(){
    // char c;
    int count[26]={0};
    // while(scanf("%c",&c)!=EOF){
    //     count[c-97]++;
    // }
    char s[100010];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        count[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            printf("%c - %d\n",i+97,count[i]);
        }
    }
    return 0;
}