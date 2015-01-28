#include <stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int games,initial,num,guess;
    while(testcases--){
        scanf("%d",&games);
        while(games--){
            scanf("%d%d%d",&initial,&num,&guess);
            if(num%2==0){
                printf("%d\n",num/2);
            }
            else{
                 if(initial == 1){
                     if(guess == 1)
                         printf("%d\n",num/2);
                     else
                         printf("%d\n",num/2+1);
                }
                else{
                        if(guess == 1){
                         printf("%d\n",num/2+1);
                     }
                        else{
                            printf("%d\n",num/2);
                     }
                }
            }
        }
    }
    return 0;
}
