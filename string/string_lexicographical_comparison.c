#include<stdio.h>

int main(){
    char s1[100];
    char s2[100];
    scanf("%s %s",&s1,&s2);
    int i = 0;
    while(1){
        if(s1[i]=='\0' && s2[i]=='\0'){
            printf("Equal\n");
            break;
        }else if(s1[i]=='\0'){
            printf("%s is smaller\n",s1);
            break;
        }else if(s2[i]=='\0'){
            printf("%s is smalller\n",s2);
            break;
        }
        
        if(s1[i]==s2[i]){
            i++;
        }else if(s1[i]>s2[i]){
            printf("%c > %c",s1[i],s2[i]);
            break;
        }else if(s1[i]<s2[i]){
             printf("%d < %d",s1[i],s2[i]);
             break;
        }
    }
    return 0;
}