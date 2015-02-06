#include <stdio.h>
#include <string.h>

int main(){

    int testcases,sum,i;
    char str[200];
    scanf("%d",&testcases);
    while(testcases--){
        sum = 0;
        scanf("%s",str);
        short int frequency[58] = {0};
        for(i=0;i<strlen(str);i++){
            frequency[str[i]-'A']++;
        }
        for(i=0;i<58;i++){
            if(frequency[i]%2 == 0){
                sum+=frequency[i]/2; 
            }
            else{
                sum+=frequency[i]/2+1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
