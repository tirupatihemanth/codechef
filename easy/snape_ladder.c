#include <stdio.h>
#include <math.h>

int main(){

    int testcases;
    scanf("%d",&testcases);
    int b,ls,rs;
    while(testcases--){
        scanf("%d%d",&b,&ls);
        printf("%f %f\n", sqrt(pow(ls,2)-pow(b,2)),sqrt(pow(ls,2)+pow(b,2)));
    }
    return 0;
}
