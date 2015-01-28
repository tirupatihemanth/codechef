#include <stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int n,i,x,sum,rem;
    while(testcases--){
        sum=0;
        scanf("%d%d",&n,&x);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        for(i=0;i<n;i++){
            sum+=arr[i];
        }
        rem = sum%x;
        for(i=0;i<n;i++){
            if(arr[i]<=rem){
                printf("-1\n");
                break;
            }
            else if(i == n-1){
                printf("%d\n", sum/x);
            }
        }
    }
    return 0;
}
