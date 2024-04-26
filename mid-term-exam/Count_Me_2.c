#include<stdio.h>

int main(){
    char c;
    int consonants = 0;
    while(scanf("%c",&c)!=EOF){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            consonants++;
        }
    }
    printf("%d",consonants);
    return 0;
}