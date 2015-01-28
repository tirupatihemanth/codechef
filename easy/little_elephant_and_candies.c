#include <stdio.h>

int main(){

    int testcases;
    int n,c,sum;
    int i,temp;
    scanf("%d",&testcases);
    while(testcases--){
        sum = 0;
        scanf("%d%d",&n,&c);
        for(i=0;i<n;i++){
            scanf("%d",&temp);
            sum+=temp;
        }

        if(sum > c){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }

    return 0;

}
