#include <stdio.h>
#include <math.h>

int main(){

    int testcases;
    scanf("%d",&testcases);
    int a[2],b[2],c[2],n;
    float ab,bc,ac;
    while(testcases--){
        scanf("%d%d%d%d%d%d%d",&n,&a[0],&a[1],&b[0],&b[1],&c[0],&c[1]);
        ab = sqrt(pow(b[0]-a[0],2)+pow(b[1]-a[1],2));
        bc = sqrt(pow(b[0]-c[0],2)+pow(b[1]-c[1],2));
        ac = sqrt(pow(c[0]-a[0],2)+pow(c[1]-a[1],2));
        
        if(ab>n&&bc>n || ab>n&&ac>n || bc>n&&ac>n){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
    return 0;
}
