#include <stdio.h>

int main(){
    
    int testcases;
    scanf("%d",&testcases);
    int n,i,rem,quo;
    while(testcases--){
        scanf("%d",&n);
        quo = n/25;
        rem= n%25;
        
        if(rem!=0){
            for(i=rem;i>=0;i--){
                printf("%c",'a'+i);
            }
        }

        while(quo--){
            for(i=25;i>=0;i--){
                printf("%c",'a'+i);
            }
        }
        printf("\n");
    }
    return 0;
}
