#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[10002];
        scanf("%s", s);
        
        int small_letter = 0;
        int capital_letter = 0;
        int digit = 0;

        for (int i = 0; i < strlen(s); i++) {
            if(s[i]>='a' && s[i]<='z') {
                small_letter++;
            }else if(s[i]>='A' && s[i]<='Z') {
                capital_letter++;
            }else if(s[i]>='0' && s[i]<='9') {
                digit++;
            }
        }
        printf("%d %d %d\n", capital_letter, small_letter, digit);
    }
    return 0;
}
