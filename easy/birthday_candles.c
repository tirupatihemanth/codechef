#include <stdio.h>

int main(){

    int testcases;
    int a[10],i,min;
    scanf("%d",&testcases);
    while(testcases--){
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        min = 8;
        if(a[0] == 0){
            for(i=1;i<10;i++){
                if(a[i]<min)
                    min = a[i];
            }

            for(i=1;i<10;i++){
                if(a[i] == min){
                    printf("%d",i);
                    while(min>0){
                        printf("0");
                        min--;
                    }
                    break;
                }
            }
        }

        else{
            for(i=1;i<10;i++){
                if(a[i]<min)
                    min = a[i];
            }
 
            for(i=1;i<10;i++){
                if(a[i] == min){
                    printf("%d",i);
                    while(min>0){
                        printf("%d",i);
                        min--;
                    }
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;

}
