#include <stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int n,k,i,num;
    while(testcases--){
        num=0;
        scanf("%d",&n);
        int length[n];
        for(i=0;i<n;i++){
            scanf("%d",length+i);
        }
        scanf("%d",&k);
        for(i=0;i<n;i++){
            if(length[i]<length[k-1]){
                num++;
            }
        }
        printf("%d\n",num+1);
    }
    return 0;
}
