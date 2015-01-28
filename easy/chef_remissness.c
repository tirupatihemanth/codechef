#include <stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int a,b;
    while(testcases--){
        scanf("%d%d",&a,&b);
        printf("%d %d\n",a>b?a:b,a+b);
    }
}
