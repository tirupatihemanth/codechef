#include <stdio.h>
#include <string.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int stat[26];
    char str[1000];
    int len,i;
    while(testcases--){
        
        scanf("%s",str);
        len = strlen(str);
        for(i=0;i<26;i++){
            stat[i] = 0;
        } 
        if(len%2==0){
            for(i=0;i<len/2;i++){
                stat[str[i]-'a']++;
            }
            for(i=len/2;i<len;i++){
                stat[str[i]-'a']--;
            }
        }
        
        else if(len%2!=0){
            for(i=0;i<len/2;i++){
                stat[str[i]-'a']++;
            }
            for(i=len/2+1;i<len;i++){
                stat[str[i]-'a']--;
            }
        }

        for(i=0;i<26;i++){
            if(stat[i]!=0){
                printf("NO\n");
                break;
            }
            else if(i==25){
                printf("YES\n");
            }
        }

    }
    return 0;
}
